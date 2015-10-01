#if 0
#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int> > &arr, const int &m, const int &n, int tag[], const int &i, const int &j)
{
  arr[i][j] = -1;
  if(i == 0) tag[0] = 1;
  else if(i == m) tag[1] = 1;
  if(j == 0) tag[2] = 1;
  else if(j == n) tag[3] = 1;
  if(j < n - 1 && arr[i][j + 1] == 0) dfs(arr,m,n,tag,i,j+1);
  if(i < m - 1 && arr[i + 1][j] == 0) dfs(arr,m,n,tag,i+1,j);
  if(j>0 && arr[i][j - 1] == 0) dfs(arr,m,n,tag,i,j-1);
  if(i>0 && arr[i - 1][j] == 0) dfs(arr,m,n,tag,i-1,j);
}

bool hasCircle(vector<vector<int> > &arr, const int&m, const int &n)
{
  if(m <= 2 || n <= 2) return false;
  for(size_t i = 0;i < m;++i)
  {
    for(size_t j = 0;j < n;++j)
    {
      if(arr[i][j] != 0) continue;
      int tag[4];
      tag[0] = tag[1] = tag[2] = tag[3] = 0;
      dfs(arr,m,n,tag,i,j);
      if(tag[0] + tag[1] + tag[2] + tag[3] < 2) return true;
    }
  }
  return false;
}

int main()
{
  vector<vector<int> > vec = { { 1, 0, 0, 0, 1 }, { 0, 1, 0, 1, 0 },
  { 1, 0, 1, 0, 1 }, { 0, 0, 1, 0, 0 } };
  cout << "Has circle :" << hasCircle(vec,4,5);
  return 0;
}
#endif
