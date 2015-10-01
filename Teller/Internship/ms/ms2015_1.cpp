#if 0
#include <iostream>
#include <cmath>
#include <cstdio>
#include <set>
using namespace std;

#define M 10005
int pp[M], qq[M];

int main()
{
  int p, q;
  cin >> p >> q;
  set<int> setp, setq;
  int low_p = 0, up_p = M - 1, low_q = 0, up_q = M - 1;
  for(int i = 1;i <= sqrt(p);++i)
  {
    if(p%i == 0)
    {
      setp.insert(i);
      setp.insert(p / i);
    }
  }

  for(int i = 1;i <= sqrt(q);++i)
  {
    if(q%i == 0)
    {
      setq.insert(i);
      setq.insert(q / i);
    }
  }
 
  for(auto it = setp.begin();it != setp.end();++it)
  {
    for(auto itt = setq.begin();itt != setq.end();++itt)
    {
      printf("%d %d\n",*it,*itt);
    }
  }

  return 0;
}
#endif
