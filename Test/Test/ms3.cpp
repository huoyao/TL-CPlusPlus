#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int abs(int a, int b) {
  int res = a - b;
  return res > 0 ? res : -res;
}

struct num
{
  int x;
  int y;

  int minNum(struct num b) {
    int i = abs(x - b.x);
    int j = abs(y - b.y);
    return min(i,j);
  }
};

int mine[100005];
int vst[100005];
num all[100005];
int dst[100005][100005];

int main(void) {
  int n, startSignal = 1;
  int sum = 0;
  struct num a, b;
  scanf("%d",&n);
  for(int i = 0;i < n;++i)
  {
    scanf("%d%d", &all[i].x, &all[i].y);
  }
  int minds = all[0].minNum(all[n-1]);
  for(int i = 0;i < n;++i)
  {
    for(int j = 0;j < n;++j)
    {

    }
  }
  for(int idx = 0;idx < n;++idx)
  {

  }
  struct num a, b;
  a.x = 0;
  a.y = 0;
  if(scanf("%d", &n) != EOF)
  {
    while(n-- > 0)
    {
      b.x = a.x;
      b.y = a.y;

      if(scanf("%ld%ld", &a.x, &a.y) != EOF)
      {
        if(startSignal)
        {
          startSignal = 0;
        } else
        {
          sum += a.minNum(b);
        }
      }
    }
  }
  printf("%d\n",sum);
  return 0;
}

