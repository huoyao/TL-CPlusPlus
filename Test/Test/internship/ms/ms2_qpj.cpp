#include <stdio.h>
#include <math.h>
#include <memory>
using namespace std;

struct num
{
  int x;
  int y;

  int minNum(struct num b) {
    int i = abs(x - b.x);
    int j = abs(y - b.y);
    return i > j ? j : i;
  }
};



int main(void) {
  int n, i, j, u,mine;
  long sum = 0;
  const int NU = 100000;
  struct num *arrNum = (struct num *)malloc(sizeof(struct num));

  int e[NU][NU], dis[NU], book[NU];
  int inf = 1000000001;

  if(scanf("%d", &n) != EOF)
  {
    for(i = 0;i < n; i++)
    {
      scanf("%d%d", &arrNum[i].x, &arrNum[i].y);
    }

    for(i = 0; i < n;i++)
    {
      for(j = 0;j < n;j++)
      {
        if(i == j)
        {
          e[i][j] = 0;
        } else
        {
          e[i][j] = arrNum[i].minNum(arrNum[j]);
        }
      }
    }

    for(i = 0;i < n;i++)
    {
      dis[i] = e[0][i];
      book[i] = 0;
    }

    book[0] = 1;
    for(i = 0; i < n;i++)
    {
      mine = inf;
      for(j = 0; j < n;j++)
      {
        if(0 == book[j] && dis[j] < mine)
        {
          mine = dis[j];
          u = j;
        }
      }
      book[u] = 1;
      int p;
      for(p = 0; p < n;p++)
      {
        if(e[u][p] < inf)
        {
          if(dis[p] > dis[u] + e[u][p])
            dis[p] = dis[u] + e[u][p];
        }
      }
    }

    sum = 0;
    for(i = 0; i < n;i++)
    {
      sum += dis[i];
    }
    printf("sum = %ld", sum);
  }

  return sum;
}