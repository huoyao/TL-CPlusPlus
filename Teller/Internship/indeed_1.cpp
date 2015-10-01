#if 0
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>
using namespace std;

int main1()
{
  int s;
  scanf("%d", &s);
  char res[100];
  int tt = 50 / s;
  int i = 0;
  if(tt>=10)res[i++] = '0'+tt/10;
  res[i++] = '0' + tt % 10;
  if(50%s)res[i++] = '.';
  int t = 50%s;
  while(t && i<=12)
  {
    t *= 10;
    res[i++] = '0'+t / s;
    t %= s;
  }
  int t13=-1, t14=0;
  if(t)
  {
    t *= 10;
    t13 = t / s;
    t %= s;
  }
  if(t)
  {
    t *= 10;
    t14 = t / s;
    t %= s;
  }
  if(t13 != -1)
  {
    if(t14>=5)t13 += 1;
    res[i++] = '0' + t13;
  }
  res[i] = '\0';
  printf("%s", res);
  return 0;
}
#endif
