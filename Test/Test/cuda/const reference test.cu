#include <cuda_runtime.h>
#include <stdio.h>
#include <thrust/device_vector.h>

__device__ void test_ref(const int& t)
{
  printf("%d\n", t);
}

__device__ void test_ref_(int &t)
{
  ++t;
}

__global__ void test_const()
{
  const int i = 3;
  test_ref(i);
  int t = 4;
  test_ref_(t);
  printf("%d %d\n",i, t);
}

int main()
{
  test_const << <1, 1 >> >();
  return 0;
}