#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <utility>
using namespace std;

void check(int &a, const int &b, const int &r)
{
  long long t1 = (a - 1)*(a - 1) + b *b;
  long long t2 = a*a + b*b;
  if(abs(t1 - r*r) < abs(t2 - r*r)) --a;
}

void setPixel(const int &x, const int &y, bool ** &pset, const int &r)
{
  pset[x + r][y + r] = true;
  pset[y + r][x + r] = true;

  pset[x + r][-y + r] = true;
  pset[y + r][-x + r] = true;

  pset[-x + r][y + r] = true;
  pset[-y + r][x + r] = true;

  pset[-x + r][-y + r] = true;
  pset[-y + r][-x + r] = true;
}

void drawCircle(const int &x, const int &y, const int &r)
{
  int yy = 0, xx = r;
  bool **vst = (bool **)malloc(sizeof(bool *)* (2 * r + 2));
  for(size_t i = 0;i < 2 * r + 2;++i)
  {
    vst[i] = (bool *)malloc(sizeof(bool)* 2 * r + 2);
    memset(vst[i], 0, sizeof(bool)*(2 * r + 2));
  }
  while(yy <= xx)
  {
    check(xx, yy, r);
    setPixel(xx, yy, vst, r);
    //printf("%d %d\n", xx, yy);
    ++yy;
  }
  vst[r][r] = true;
  for(size_t i = 0;i < 2 * r + 2;++i)
  {
    for(size_t j = 0;j < 2 * r + 2;++j)
    {
      if(vst[i][j]) printf("@");
      else printf(".");
    }
    printf("\n");
  }
  for(size_t i = 0;i < 2 * r + 2;++i)
  {
    if(vst[i])
    {
      free(vst[i]);
      vst[i] = NULL;
    }
      
  }
  if(vst != NULL)
  {
    free(vst);
    vst = NULL;
  }
    
}

int main()
{
  int x = 3, y = 5, r = 50;
  drawCircle(x, y, r);
  return 0;
}