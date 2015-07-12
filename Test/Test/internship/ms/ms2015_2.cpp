#include<cstdio>
#include <iostream>
using namespace std;
int prime[20] = { 0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 51 };

long long  max_e, num,res;

void getres(long long m, int idx, int t, int up)
{
  if(t > max_e || (t == max_e&&m < res))
  {
    res = m;
    max_e = t;
  }
  long long i = m;
  int j = 0, l = 1, nt;
  while(j < up)
  {
    j++;
    l++;
    if(num / i < prime[idx])break;
    nt = t*l;
    i = i*prime[idx];
    if(i <= num) getres(i, idx + 1, nt, j);
  }
}

int main()
{
  max_e = -1;
  res = -1;
  scanf("%lld", &num);
  getres(1, 1, 1, 30);
  printf("%lld\n", res);
}