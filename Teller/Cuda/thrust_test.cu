#include <cuda_runtime.h>
#include <thrust/device_vector.h>

int main()
{
  thrust::device_vector<int> d_vec(12,0);
  thrust::device_vector<int> d_vec1(12, -1);
  return 0;
}