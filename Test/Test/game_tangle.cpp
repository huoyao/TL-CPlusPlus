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

inline int max33(const int &a, const int &b, const int &c)
{
  return max(max(a, b), c);
}

inline int max3(const Val &v)
{
  return max33(v.top, v.left, v.right);
}

int main()
{
  int n, m;
  scanf("%d%d",&n,&m);
  int **grid = (int **)malloc(sizeof(int *)*m);
  for(size_t i = 0;i < m;++i)
    grid[i] = (int *)malloc(sizeof(int)*n);
  Val **rec = (Val **)malloc(sizeof(Val *)*m);
  for(size_t i = 0;i < m;++i)
    rec[i] = (Val *)malloc(sizeof(Val)*n);
  //rotate input matrix
  Val vl(-1,-1,-1);
  for(int i = n - 1;i >= 0;--i)
  {
    for(size_t j = 0;j < m;++j)
    {
      scanf("%d", &grid[j][i]);
      rec[j][i]=vl;
    }
  }
  //other lines
  for(size_t i = 0;i < m;++i)
  {
    for(size_t j = 0;j < n;++j)
    {
      if(grid[i][j] == -1)continue;
      //top
      if(i == 0)
      {
        rec[i][j].top = grid[i][j];
      } else
      {
        if(grid[i - 1][j] != -1) rec[i][j].top = max3(rec[i - 1][j]) + grid[i][j];
        else rec[i][j].top = -1;
      }
      //left
      if(j == 0) rec[i][j].left = rec[i][j].top;
      else if(j == n - 1)
      {
        if(rec[i][0].top != -1) rec[i][j].left = grid[i][j];
        if(rec[i][j - 1].left != -1) rec[i][j].left = max(rec[i][j].left, rec[i][j - 1].left + grid[i][j]);
        rec[i][j].left = max33(rec[i][j - 1].left, rec[i][j].top, rec[i][j].left);
      }
      else rec[i][j].left = rec[i][j - 1].left==-1?rec[i][j].top:max(rec[i][j - 1].left+grid[i][j], rec[i][j].top);
    }
    //right
    for(int id = n - 1;id >= 0;--id)
    {
      if(id == n - 1) rec[i][id].right = rec[i][id].top;
      else if(id == 0)
      {
        if(rec[i][n - 1].top != -1) rec[i][id].right = grid[i][id];
        if(rec[i][id + 1].right != -1) rec[i][id].right = max(rec[i][id + 1].right + grid[i][id], rec[i][id].right);
        rec[i][id].right = max33(rec[i][id + 1].right, rec[i][id].top, rec[i][id].right);
      } else rec[i][id].right = rec[i][id + 1].right == -1 ? rec[i][id].top : max(rec[i][id + 1].right + grid[i][id], rec[i][id].top);
    }
  }
  //find the greatest one in last line
  int res = max3(rec[m - 1][0]);
  for(size_t i = 1;i < n;++i)
  {
    if(res < max3(rec[m - 1][i])) res = max3(rec[m-1][i]);
  }
  printf("%d\n",res);
  //free memory
  for(size_t i = 0;i < m;++i)
    free(grid[i]);
  free(grid);
  for(size_t i = 0;i < m;++i)
    free(rec[i]);
  free(rec);
  return 0;
}