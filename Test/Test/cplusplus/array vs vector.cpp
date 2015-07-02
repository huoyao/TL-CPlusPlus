#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

void performanceArray(const size_t &n)
{
  //int *a = new int[n];
  //memset(a, 0, sizeof(int)*n);
  //for(size_t i = 0;i < n;++i) a[i] = 1;
  //delete[] a;

  int *a = (int *)malloc(sizeof(int)*n);
  memset(a, 0, sizeof(int)*n);
  for(size_t i = 0;i < n;++i) a[i] = 1;
  free(a);
}

void performanceVector(const size_t &n)
{
  //vector<int> a;
  //a.reserve(n);
  //for(size_t i = 0;i < n;++i)
  //  a.push_back(1);

  vector<int> a(n, 0);
  for(vector<int>::iterator it = a.begin();it != a.end();++it) *it = 1;
  //for(size_t i = 0;i < n;++i) a[i] = static_cast<int>(i);
}

int main()
{
  const size_t &num = 10000000;
  clock_t time_start=clock();
  for(size_t i = 0;i < 100;++i)
    performanceArray(num);
  clock_t time_end = clock();
  cout << "Array time:" << time_end - time_start << endl;
  time_start = clock();
  for(size_t i = 0;i < 100;++i)
    performanceVector(num);
  time_end = clock();
  cout << "vector time:" << time_end - time_start << endl;
}