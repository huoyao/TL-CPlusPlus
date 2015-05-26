#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

//n>=m
int f(int m, int n)
{
  float a = 1.0*n / m;
  int x = n - log(1.0*a) / log(2.0);
  return x;
}

//the first one
int firstOne(const int &n)
{
  unsigned int one = 0x80000000;
  int cnt = 0;
  while((n & one) == 0) 
  { 
    one >>= 1;
    ++cnt;
  }
  return cnt;
}

//optimization --failed
//int x=n-log_(n)+log_(n)
//__builtin_clz:gcc function Returns the number of leading 0-bits in x,
//starting at the most significant bit position.
//If x is 0, the result is undefined.
int ff(int m, int n)
{
  //return n -(31 -__builtin_clz(n)) + (31-__builtin_clz(m));
  //return n +__builtin_clz(n)- __builtin_clz(m);
  return n + firstOne(n) - firstOne(m);
}

int main()
{
  int m = 4, n = 7;
  cout << "real data:" << f(m, n) << endl;
  cout << " our data:" << ff(m, n) << endl;
  return 0;
}