#include "cuda_runtime.h"
#include "vector_types.h"
#include <iostream>
#include "device_launch_parameters.h"
#include <helper_cuda.h>
#include <iostream>
#include "stdio.h"
#include "atomic.cuh"
using namespace std;

struct mat
{
  double3 col0;
  double3 col1;
  double3 col2;
  //__device__ ~mat(){};
};

__device__ void adda(int **a)  
{
  a[0][0] = 1;
}

__global__ void kernel_test(int **a)
{
  adda(a);
  adda(a);
  double3 d3;
  atomicAdd(&d3.x,1.);
  printf("ok\n");
  printf("%d\n",a[0][0]);
}

int main()
{
  const int ROWS = 3,COLS = 3;
  int **da = NULL,**ha=NULL;
  int *dc = NULL;

  cudaMalloc((void**)(&da), ROWS*sizeof(int*));
  cudaMalloc((void**)(&dc), ROWS*COLS*sizeof(int));
  ha = (int**)malloc(ROWS*sizeof(int*));
  (int*)malloc(ROWS*COLS*sizeof(int));
  for(int r = 0; r < ROWS; r++)
  {
    ha[r] = dc + r*COLS;
  }
  cudaMemcpy(da,ha, ROWS*sizeof(int*), cudaMemcpyHostToDevice);
  kernel_test <<<1, 1>>>(da);
  return 0;
}