#include "cuda_runtime.h"
#include <stdio.h>

__device__ void ar(int k[])
{
  for(int i = 0;i < 10;++i)
  {
    k[i] = i;
  }
}

__global__ void array()
{
  int k[10];
  ar(k);
  int i = k[0];
  printf("%d\n",k[0]);
}

int main()
{
  array<<<1,1>>>();
  return;
}