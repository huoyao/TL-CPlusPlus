#if 0
#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <string>
using namespace std;

void ckeck(int &y0,const int &y1 , int &cnt)
{
  while(y0 <= y1)
  {
    if(y0 % 400 == 0 || y0 % 4 == 0 && y0 % 100 != 0)
    {
      ++cnt;
      break;
    }
    ++y0;
  }
}

int main(void)
{
  int n;
  cin >> n;
  unordered_map<string, int> umap = {
    { "January", 1 }, { "February", 2 }, { "March", 3 }, { "April", 4 },
    { "May", 5 }, { "June", 6 }, { "July", 7 }, { "August", 8 },
    { "September", 9 }, { "October", 10 }, { "November", 11, }, { "December", 12 }
  };
  char mon0[15] = "", mon1[15] = "";
  int d0, d1, y0, y1;
  for(int i = 0;i < n;++i)
  {
    int cnt = 0;
    scanf("%s%d,%d", mon0, &d0, &y0);
    scanf("%s%d,%d", mon1, &d1, &y1);
    if(umap[mon0]>2) ++y0;
    if(umap[mon1] < 2 || umap[mon1] == 2 && d1 < 29) --y1;
    ckeck(y0, y1, cnt);
    int idx = y0 + 4;
    while(idx<= y1)
    {
      if(idx % 100==0)
      {
        if(idx % 400)--cnt;
      }
      ++cnt;
      idx += 4;
    }
    printf("Case #%d: %d\n",i+1,cnt);
  }
  return 0;
}
#endif
