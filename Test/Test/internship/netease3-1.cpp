#include<stdio.h>
#include<iostream>
#include<queue>
#include<string.h>
#define N 300
using namespace std;
int M[N][N], n, m;
int ans[N][N][4];
int dir[4][2] = { 0, 1, 1, 0, 0, -1, -1, 0 };
typedef struct P
{
  int cnt, dir;
  int x, y;
  P(int cnt_, int dir_, int x_, int y_)
  {
    cnt = cnt_;
    dir = dir_;
    x = x_;
    y = y_;
  }
}P;
void BFS(int x, int y, int k)
{
  int i, j, kk;
  for(i = 0;i < N;i++)
  {
    for(j = 0;j < N;j++)
    {
      for(kk = 0;kk < 4;kk++)
      {
        ans[i][j][kk] = k + 1;
      }
    }
  }
  queue<P>que;
  for(i = 0;i < 4;i++)
    que.push(P(0, i, x, y));
  ans[x][y][0] = 0;
  while(!que.empty())
  {
    P p = que.front();
    int x1, y1;
    for(i = 0;i < 4;i++)
    {
      x1 = p.x + dir[p.dir][0];
      y1 = p.y + dir[p.dir][1];
      if(dir[i][0] + dir[p.dir][0] == 0 && dir[i][1] + dir[p.dir][1] == 0)
        continue;
      if(x1 >= 0 && y1 >= 0 && x1 <= m + 1 && y1 <= n + 1)
      {
        if(p.dir == i&&p.cnt < ans[x1][y1][p.dir])
        {
          ans[x1][y1][p.dir] = p.cnt;
          if(M[x1][y1] == 0)
            que.push(P(p.cnt, i, x1, y1));
        }
        if(p.dir != i&&p.cnt + 1 < ans[x1][y1][i])
        {
          ans[x1][y1][i] = p.cnt + 1;
          if(M[x1][y1] == 0)
            que.push(P(p.cnt + 1, i, x1, y1));
        }
      }
    }
    que.pop();
  }
}
int main()
{
  int k, T, i, j;
  int x, y;
  cin >> T;
  while(T--)
  {
    cin >> m >> n;
    memset(M, 0, sizeof(M));
    for(i = 1;i <= m;i++)
    {
      for(j = 1;j <= n;j++)
      {
        cin >> M[i][j];
      }
    }
    cin >> x >> y >> k;
    BFS(x, y, k);
    int kk, result = 0;
    for(i = 1;i <= m;i++)
    {
      for(j = 1;j <= n;j++)
      {
        if(M[x][y] == M[i][j])
        {
          for(kk = 0;kk < 4;kk++)
          {
            if(ans[i][j][kk] <= k)
              break;
          }
          if(kk < 4)
            result++;
        }
      }
    }
    cout << result - 1 << endl;
  }
  return 0;
}