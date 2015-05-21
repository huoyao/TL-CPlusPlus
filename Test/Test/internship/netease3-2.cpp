#include <iostream>
#include <cstring>
#include <cstdio>
#include <queue>

using namespace std;

#define MAXN 205
#define MAXM 205
#define mp make_pair
#define X first
#define Y second

typedef pair<int, int> Pos;	//x,y
typedef pair<int, int> Rec;	//dir,num
typedef pair<Pos, Rec> State;

Pos operator+ (Pos a, Pos b) {
  return mp(a.first + b.first, a.second + b.second);
}

int S, n, m, x, y, k;
int mat[MAXN][MAXM];
int mark[MAXN][MAXM];
Pos	opt[4] = { mp(1, 0), mp(-1, 0), mp(0, -1), mp(0, 1) };

bool inbound(Pos x) {
  return (x.first >= 0 && x.first <= n + 1 && x.second >= 0 && x.second <= m + 1);
}
inline bool parallel(int a, int b) {
  return a < 2 && b < 2 || a > 1 && b > 1;
}
inline int &category(int mat[MAXM][MAXN], Pos &x) {
  return mat[x.first][x.second];
}

int search(Pos s) {
  int tar = category(mat, s);
  //printf("target is %d\n", tar);
  int ans = 0;
  queue<State>	q;
  for(int i = 0; i < 4; i++)
    q.push(mp(s, mp(i, 0)));
  while(!q.empty())
  {
    State cur = q.front();
    q.pop();
    int last_dir = cur.Y.X, last_num = cur.Y.Y, next_num;
    Pos last_pos = cur.X, next_pos;
    for(int i = 0; i < 4; i++)
    {
      if(parallel(i, last_dir) && i != last_dir) continue;	//反着走不行
      next_pos = last_pos + opt[i];
      next_num = last_num + (i != last_dir);
      if(inbound(next_pos))
      {
        if(next_pos == s) continue;
        if(category(mat, next_pos) == tar)
        {	//到目标点
          if(next_num <= k && category(mark, next_pos) == 0)
          {
            category(mark, next_pos) = 1;
            //printf("(%d, %d)\n", next_pos.X, next_pos.Y);
            ans++;
          }
        } else if(category(mat, next_pos) == 0 && next_num <= k)
        {									//继续搜
          q.push(mp(next_pos, mp(i, next_num)));
        }
      }
    }
  }
  return ans;
}

int main() 
{
  scanf("%d", &S);
  while(S--)
  {
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      scanf("%d", &mat[i][j]);
    for(int i = 0; i <= n + 1; i++)
      mat[i][m + 1] = 0;
    for(int j = 0; j <= m + 1; j++)
      mat[n + 1][j] = 0;
    memset(mark, 0, sizeof(int)*MAXN*MAXM);
    scanf("%d%d%d", &x, &y, &k);
    printf("%d\n", search(mp(x, y)));
  }
  return 0;
}