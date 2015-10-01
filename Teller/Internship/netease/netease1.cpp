#if 0
#include <iostream>
#include <cstdio>

using namespace std;

#define MAXN 105
#define MAXM 105
#define mp make_pair

typedef pair<int, int> Pos;

int	m, n, s;
Pos	man, des, box;	//玩家、目标点、箱子
int mat[MAXM][MAXN];

Pos	opt[4] = { mp(1, 0), mp(-1, 0), mp(0, -1), mp(0, 1) };

Pos operator+ (Pos a, Pos b) {
  return mp(a.first + b.first, a.second + b.second);
}

bool inbound(Pos x) {
  return (x.first >= 0 && x.first < m && x.second >= 0 && x.second < n);
}

inline int &category(int mat[MAXM][MAXN], Pos &x) {
  return mat[x.first][x.second];
}

bool calc() {
  int mat[MAXM][MAXN];
  Pos	man = ::man, box = ::box;
  for(int i = 0; i < m; i++)
  for(int j = 0; j < n; j++)
    mat[i][j] = ::mat[i][j];
  int t, o;
  bool fin = false;
  char c;
  scanf("%d", &t);
  c = getchar();
  for(int i = 0; i < t; i++)
  {
    c = getchar();
    if(fin) continue;
    switch(c)
    {
    case 'd':
      o = 0;
      break;
    case 'u':
      o = 1;
      break;
    case 'l':
      o = 2;
      break;
    case 'r':
      o = 3;
      break;
    }
    Pos next = man + opt[o];
    Pos nbox;
    if(inbound(next))
    {
      switch(category(mat, next))
      {
      case 4:	//wall
        break;
      case 3:	//box
        nbox = box + opt[o];
        if(inbound(nbox))
        if(category(mat, nbox) != 4)
        {
          category(mat, man) = 0;
          category(mat, next) = 1;
          category(mat, nbox) = 3;
          box = nbox, man = next;
        }
        if(box == des) fin = true;
        break;
      default://blank or man
        category(mat, man) = 0;
        category(mat, next) = 1;
        man = next;
        break;
      }
    }
  }
  return fin;
}

int main() {
  cin >> n >> m >> s;
  for(int i = 0; i < m; i++)
  for(int j = 0; j < n; j++)
  {
    scanf("%1d", &mat[i][j]);
    if(mat[i][j] == 1) man = mp(i, j);
    else if(mat[i][j] == 2) des = mp(i, j);
    else if(mat[i][j] == 3) box = mp(i, j);
  }
  for(int i = 0; i < s; i++)
  {
    if(calc()) puts("YES");
    else puts("NO");
  }

  return 0;
}
#endif
