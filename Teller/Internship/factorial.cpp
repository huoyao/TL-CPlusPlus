#if 0
#include <iostream>
using namespace std;

class Factorial
{
public:
  Factorial(){}
  Factorial(const int &a, const int&b):n(a), m(b)
  {
    div = 1;
    for(size_t i = 0;i < m;++i)
    {
      div *= 10;
    }
  }
  ~Factorial(){}

  long long  lastM();
private:
  int n, m;
  long long div;
};

long long Factorial::lastM()
{
  long long t = 0;
  for(size_t i = 0;i < m;++i)
  {
    t += 5;
    long long t_bak = t/5;
    while(t_bak / 5)
    {
      ++i;
      t_bak /= 5;
    }
  }
  long long a = 1, b=0;
  for(size_t i = 1;i < t;++i)
  {
    a *= i;
    a %= div;
    b += a;
    b %= div;
  }
  return b;
}

int main()
{
  Factorial fct(26, 1);
  long long res = fct.lastM();
  cout << "result:" << res << endl;
  return 0;
}
#endif
