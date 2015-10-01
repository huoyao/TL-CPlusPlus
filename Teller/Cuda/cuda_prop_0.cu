#include <stdio.h>
#include <stdlib.h>
#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include <math.h>

__global__ void kernel_A_(float *g_data)
{
  int idx = blockDim.x*blockIdx.x + threadIdx.x;
  //���˷������滻Ϊλ���������Ч��
  idx <<= 1;
  //����һ���̴߳������ڵ�������ż���ݣ����������ж�����ִ�У�Ҳ����ʹÿ���߳��������ܶ������
  float value0 = g_data[idx];
  float value1 = g_data[idx + 1];

  value0 += sqrtf(cosf(value0) + 1.f);
  value1 += sqrtf(logf(value1) + 1.f);

  g_data[idx] = value0;
  g_data[idx + 1] = value1;
}

float timing_experiment_(void(*kernel)(float*), float *d_data, int dimx, int dimy, int nreps, int blockx, int blocky)
{
  float elapsed_time_ms = 0.0f;
  cudaEvent_t start, stop;
  cudaEventCreate(&start);
  cudaEventCreate(&stop);

  //����block��grid��С���������ݵĶ�ȡ����;ֲ���ԭ�����ң�����d_data��һά���ݣ�����һά��block��gridЧ������
  int block = 512;
  int grid = dimx*dimy / (block << 1);

  cudaEventRecord(start, 0);
  for(int i = 0; i<nreps; i++)	// do not change this loop, it's not part of the algorithm - it's just to average time over several kernel launches
    kernel << <grid, block >> >(d_data);  //�����߳�����֪������£�ȥ��dimy,dimx�����ٲ���Ҫ�Ĳ�������
  cudaEventRecord(stop, 0);
  cudaThreadSynchronize();
  //cudaEventSynchronize(stop);
  cudaEventElapsedTime(&elapsed_time_ms, start, stop);
  elapsed_time_ms /= nreps;

  cudaEventDestroy(start);
  cudaEventDestroy(stop);

  return elapsed_time_ms;
}

__global__ void kernel_A(float *g_data, int dimx, int dimy)
{
  int ix = blockIdx.x;
  int iy = blockIdx.y*blockDim.y + threadIdx.y;
  int idx = iy*dimx + ix;

  float value = g_data[idx];

  if(ix % 2)
  {
    value += sqrtf(logf(value) + 1.f);
  } else
  {
    value += sqrtf(cosf(value) + 1.f);
  }

  g_data[idx] = value;
}

float timing_experiment(void(*kernel)(float*, int, int), float *d_data, int dimx, int dimy, int nreps, int blockx, int blocky)
{
  float elapsed_time_ms = 0.0f;
  cudaEvent_t start, stop;
  cudaEventCreate(&start);
  cudaEventCreate(&stop);

  //blockx = 512;
  dim3 block(blockx, blocky);
  dim3 grid(dimx / block.x, dimy / block.y);
  //int block = 128;
  //int grid = dimx*dimy / block;

  cudaEventRecord(start, 0);
  for(int i = 0; i < nreps; i++)	// do not change this loop, it's not part of the algorithm - it's just to average time over several kernel launches
    kernel << <grid, block >> >(d_data, dimx, dimy);
  cudaEventRecord(stop, 0);
  cudaThreadSynchronize();
  cudaEventElapsedTime(&elapsed_time_ms, start, stop);
  elapsed_time_ms /= nreps;

  cudaEventDestroy(start);
  cudaEventDestroy(stop);

  return elapsed_time_ms;
}

__global__ void kerl(float *d,float *d_)
{
  printf("");
}

int main()
{
  int dimx = 2 * 1024;
  int dimy = 2 * 1024;

  int nreps = 10;

  int nbytes = dimx*dimy*sizeof(float);

  float *d_data = 0, *h_data = 0,*d_data_;
  cudaMalloc((void**)&d_data, nbytes);
  cudaMalloc((void**)&d_data_, nbytes);
  if(0 == d_data)
  {
    printf("couldn't allocate GPU memory\n");
    return -1;
  }
  printf("allocated %.2f MB on GPU\n", nbytes / (1024.f*1024.f));
  h_data = (float*)malloc(nbytes);
  if(0 == h_data)
  {
    printf("couldn't allocate CPU memory\n");
    return -2;
  }
  printf("allocated %.2f MB on CPU\n", nbytes / (1024.f*1024.f));
  for(int i = 0; i < dimx*dimy; i++)
    h_data[i] = 10.f + rand() % 256;
  cudaMemcpy(d_data, h_data, nbytes, cudaMemcpyHostToDevice);
  cudaMemcpy(d_data_, h_data, nbytes, cudaMemcpyHostToDevice);

  float elapsed_time_ms = 0.0f;

  elapsed_time_ms = timing_experiment(kernel_A, d_data, dimx, dimy, nreps, 1, 512);
  printf("A:  %8.2f ms\n", elapsed_time_ms);

  float elapsed_time_ms_ = 0.0f;

  elapsed_time_ms_ = timing_experiment_(kernel_A_, d_data_, dimx, dimy, nreps, 1, 512);
  printf("A:  %8.2f ms\n", elapsed_time_ms_);

  printf("CUDA: %s\n", cudaGetErrorString(cudaGetLastError()));

  float *h_data0, *h_data1;
  h_data0 = (float*)malloc(nbytes);
  h_data1 = (float*)malloc(nbytes);
  cudaMemcpy(h_data0, d_data, nbytes, cudaMemcpyDeviceToHost);
  cudaMemcpy(h_data1, d_data_, nbytes, cudaMemcpyDeviceToHost);
  kerl << <1, 1 >> >(d_data, d_data_);
  for(size_t i = 0; i < dimx*dimy; i++)
  {
    if(abs(h_data0[i] - h_data1[i]>1e-6))
      printf("%f %f\n", h_data0[i],h_data1[i]);
  }
  if(d_data)
    cudaFree(d_data);
  if(h_data)
    free(h_data);

  cudaThreadExit();

  return 0;
}