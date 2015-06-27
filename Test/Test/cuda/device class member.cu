#include "cuda_runtime.h"
#include <helper_cuda.h>
#include "vector_types.h"
#include <iostream>
#include "device_launch_parameters.h"
#include <iostream>
#include "stdio.h"
using namespace std;

class Base
{
public:
  int *dt;
};

class Ds
{
public:
  __device__ __host__ void getData(int []);
  __device__ __host__ void printData();
  Base bs;
  int *data;
};

__device__ __host__ void Ds::getData(int bb[])
{
  bb[0]=1;
}

__device__ __host__ void printData(int *data)
{
  printf("%d\n",data[0]);
}

__global__ void kernel_print(Ds *ds)
{
  int bk[3];
  ds->getData(bk);
  //ds->data[0] = 1;
  printData(ds->data);
  printf("%d\n",bk[0]);
}

__global__ void kernel_test(int *ds)
{
  //int *bk = ds->getData();
  //ds->getData();
  //ds->bs.dt = bk;
}

int main()
{
  Ds *ds = new Ds();
  int *dint = NULL;
  checkCudaErrors(cudaMalloc(&ds->data, sizeof(int)* 3));
  checkCudaErrors(cudaMemset(ds->data, 0, sizeof(int)* 3));
  kernel_print<<<1,1>>>(ds);
  kernel_test << <1, 1 >> >(dint);
  return 0;
}