#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

struct pt
{
  int x, y;
};

int mp[201][201];
std::vector<pt> vec[2];
int s, n, m, t1, t2, k, cnt, val;

void init(const int &n, const int &m)
{
  for(int i = 0;i <= n;++i)
  for(int j = 0; j <= m; ++j)
  {
    mp[i][j] = 0;
  }
}

void bfs(const pt &pp, const int &t)
{
  int x = pp.x, y = pp.y;
  pt pt;
  ++x;
  while(x <= n + 1)
  {
    if(mp[x][y] == 0)
    {
      pt.x = x;
      pt.y = y;
      vec[t].push_back(pt);
    } else if(mp[x][y] == val)
    {
      ++cnt;
      mp[x][y] = val + 1;
    } else
    {
      break;
    }
    ++x;
  }

  x = pp.x - 1;
  while(x >= 0)
  {
    if(mp[x][y] == 0)
    {
      pt.x = x;
      pt.y = y;
      vec[t].push_back(pt);
    } else if(mp[x][y] == val)
    {
      ++cnt;
      mp[x][y] = val + 1;
    } else
    {
      break;
    }
    --x;
  }

  x = pp.x;
  y = pp.y - 1;
  while(y >= 0)
  {
    if(mp[x][y] == 0)
    {
      pt.x = x;
      pt.y = y;
      vec[t].push_back(pt);
    } else if(mp[x][y] == val)
    {
      ++cnt;
      mp[x][y] = val + 1;
    } else
    {
      break;
    }
    --y;
  }

  y = pp.y + 1;
  while(y <= m + 1)
  {
    if(mp[x][y] == 0)
    {
      pt.x = x;
      pt.y = y;
      vec[t].push_back(pt);
    } else if(mp[x][y] == val)
    {
      ++cnt;
      mp[x][y] = val + 1;
    } else
    {
      break;
    }
    ++y;
  }
}

int main(void)
{
  //freopen("input.txt", "r", stdin);
  cin >> s;
  for(int i = 0;i < s;++i)
  {
    scanf("%d%d", &n, &m);
    init(n+2, m+2);
    for(int j = 1;j <= n;++j)
    {
      for(int k = 1;k <= m;++k)
        scanf("%d", &mp[j][k]);
    }
    scanf("%d%d%d", &t1, &t2, &k);
    int tag = 0;
    val = mp[t1][t2];
    mp[t1][t2] = val + 1;
    pt tt;
    tt.x = t1;
    tt.y = t2;
    vec[0].push_back(tt);
    cnt = 0;
    while(k--)
    {
      for(int w = 0;w < vec[tag].size();++w)
      {
        bfs(vec[tag][w], (tag + 1) % 2);
      }
      vec[tag].clear();
      tag = (tag + 1) % 2;
    }
    printf("%d\n", cnt);
  }
  return 0;
}