//TLE for big input data
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <queue>
using namespace std;

using namespace std;
unordered_set<int> vec[100005];
int color[100005];
int t, n, a, b, q, tag, x, y;

//int dfs()
//{
//  int cnt = 0;
//  vector<bool> vst(n + 1, false);
//  for (int i = 1; i <= n;++i)
//  {
//    if (vst[i]) continue;
//    ++cnt;
//    queue<int> qu;
//    qu.push(i);
//    while (!qu.empty())
//    {
//      int id = qu.front();
//      qu.pop();
//      vst[id] = true;
//      for (size_t k = 1; k < vec[id].size();++k)
//      {
//        int idx = vec[id][k];
//        if (!vst[idx] && vec[idx][0]==vec[i][0]) qu.push(idx);
//      }
//    }
//  }
//  return cnt;
//}

int main()
{
  scanf("%d", &t);
  for (size_t i = 1; i <= t; ++i)
  {
    scanf("%d", &n);
    for (size_t k = 1; k <= n; ++k)
    {
      vec[k].clear();
      color[k] = 0;
    }
    for (size_t k = 1; k < n; ++k)
    {
      scanf("%d%d", &a, &b);
      vec[a].insert(b);
      vec[b].insert(a);
    }
    scanf("%d", &q);
    bool prt = false;
    int cnt = 1;
    for (size_t k = 0; k < q; ++k)
    {
      scanf("%d", &tag);
      if (tag == 1)
      {
        if (prt == false)
        {
          printf("Case #%d:\n", i);
          prt = true;
        }
        //int res = dfs();
        printf("%d\n", cnt);
      }
      else
      {
        scanf("%d%d", &x, &y);
        if (color[x]==y) continue;
        for (unordered_set<int>::iterator it = vec[x].begin(); it != vec[x].end();++it)
        {
          if (color[x] == color[*it] && color[*it] != y) ++cnt;
          else if (color[x] != color[*it] && color[*it] == y) --cnt;
        }
        color[x] = y;
      }
    }
  }
  return 0;
}