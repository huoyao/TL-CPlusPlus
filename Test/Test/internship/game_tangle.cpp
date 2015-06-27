#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct Val
{
  int left, right,top;
  Val(){}
  Val(const int &a, const int &b, const int &c):top(a), left(b), right(c){}
};

inline int max3(const Val &v)
{
  return max(max(v.top, v.left), v.right);
}

int main()
{
  int n, m;
  scanf("%d%d",&n,&m);
  int **grid = (int **)malloc(sizeof(int *)*m);
  for(size_t i = 0;i < m;++i)
    grid[i] = (int *)malloc(sizeof(int)*n);
  //record the value from top,left and right direction
  Val **rec = (Val **)malloc(sizeof(Val *)*2);
  for(size_t i = 0;i < 2;++i)
    rec[i] = (Val *)malloc(sizeof(Val)*n);
  //rotate input matrix
  for(int i = n - 1;i >= 0;--i)
  {
    for(size_t j = 0;j < m;++j)
    {
      scanf("%d", &grid[j][i]);
    }
  }
  //initialize rec[2]
  Val vl(-1, -1, -1);
  for(size_t i = 0;i < 2;++i)
    for(size_t j = 0;j < n;++j)
      rec[i][j] = vl;
  //process all lines
  int id0 = 0, id1 = 1;
  for(size_t i = 0;i < m;++i)
  {
    for(size_t j = 0;j < n;++j)
    {
      if(grid[i][j] == -1)continue;
      //top
      if(i == 0)
      {
        rec[id1][j].top = grid[i][j];
      } else
      {
        if(grid[i - 1][j] != -1 && max3(rec[id0][j])!=-1) rec[id1][j].top = max3(rec[id0][j]) + grid[i][j];
        else rec[id1][j].top = -1;
      }
      //left
      if(j == 0) rec[id1][j].left = rec[id1][j].top;
      else if(j == n - 1)
      {
        if(rec[id1][0].top != -1) rec[id1][j].left = grid[i][j];
        if(rec[id1][j - 1].left != -1) rec[id1][j].left = max(rec[id1][j].left, rec[id1][j - 1].left + grid[i][j]);
        rec[id1][j].left = max(rec[id1][j].top, rec[id1][j].left);
      }
      else rec[id1][j].left = rec[id1][j - 1].left == -1 ? rec[id1][j].top : max(rec[id1][j].top,rec[id1][j - 1].left + grid[i][j]);
    }
    //right
    for(int id = n - 1;id >= 0;--id)
    {
      if(grid[i][id] == -1)continue;
      if(id == n - 1) rec[id1][id].right = rec[id1][id].top;
      else if(id == 0)
      {
        if(rec[id1][n - 1].top != -1) rec[id1][id].right = grid[i][id];
        if(rec[id1][id + 1].right != -1) rec[id1][id].right = max(rec[id1][id + 1].right + grid[i][id], rec[id1][id].right);
        rec[id1][id].right = max(rec[id1][id].right, rec[id1][id].top);
      } else rec[id1][id].right = rec[id1][id + 1].right == -1 ? rec[id1][id].top : max(rec[id1][id].top,rec[id1][id + 1].right + grid[i][id]);
    }
    swap(id0,id1);
    //initialize rec[id1] for next loop
    for(size_t i = 0;i < n;++i)
      rec[id1][i] = vl;
  }
  //find the greatest one in last line
  int res = max3(rec[id0][0]);
  for(size_t i = 1;i < n;++i)
  {
    if(res < max3(rec[id0][i])) res = max3(rec[id0][i]);
  }
  printf("%d\n",res);
  //free memory
  for(size_t i = 0;i < m;++i)
    free(grid[i]);
  free(grid);
  for(size_t i = 0;i < 2;++i)
    free(rec[i]);
  free(rec);
  return 0;
}