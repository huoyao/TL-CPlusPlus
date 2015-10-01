#if 0
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <memory>
#include <map>
#include <queue>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int visited[105], map_d[105][105], lowcost[105], n, m;
vector<pair<int, int> > pa(105, pair<int, int>());

void prime(int v)
{
  int i, j, minn, k;
  for (i = 1; i <= n; i++)
  {
    lowcost[i] = map_d[v][i];
    pa[i] = pair<int, int>(v, i);
  }
  visited[v] = 1;
  for (i = 2; i <= n; i++)
  {
    minn = 100000000;
    for (j = 1; j <= n; j++)
      if (lowcost[j] < minn && visited[j] == 0)
      {
        minn = lowcost[j];
        k = j;
      }
    visited[k] = 1;
    int a = pa[k].first, b = pa[k].second;
    if (map_d[a][b] < map_d[b][a]) map_d[a][b] = -1;
    else if (map_d[a][b] > map_d[b][a]) map_d[b][a] = -1;
    else {
      map_d[a][b] = -1;
      map_d[b][a] = -1;
    }

    for (j = 1; j <= n; j++)
      if (lowcost[j] > map_d[k][j] && visited[j] == 0)
      {
        lowcost[j] = map_d[k][j];
        pa[j] = pair<int, int>(k, j);
      }
  }
}

int main()
{
  ifstream ifs("C-small-attempt1.in");
  ofstream ofs("out1_2.txt");
  int t;
  ifs >> t;
  for (size_t i = 0; i < t; i++)
  {
    memset(visited, 0, sizeof(visited));
    memset(map_d, 1, sizeof(map_d));
    //cout << map_d[0][0];
    std::vector<pair<int, int> > vec;
    ifs >> n >> m;
    //cout << n << m;
    for (int j = 0; j < m; ++j)
    {
      int a, b, c;
      ifs >> a >> b >> c;
      vec.push_back(pair<int, int>(a + 1, b + 1));
      map_d[a + 1][b + 1] = c;
    }
    prime(1);
    ofs << "Case #" << i + 1 << ": " << endl;
    for (int k = 0; k < m; ++k)
    {
      int a = vec[k].first, b = vec[k].second;
      if (map_d[a][b] != -1) ofs << k << endl;
    }
  }
  ifs.close();
  ofs.close();
  system("pause");
  return 0;
}
#endif
