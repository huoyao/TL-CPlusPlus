#if 0
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int n, x, y, b;

struct ds
{
  int id,v, s;
};

bool cmp(const ds &d1,const ds&d2)
{
  if(d1.v*d2.s == d2.v*d1.s)
    return d1.id < d2.id;
  return  d1.v*d2.s < d2.v*d1.s;
}

int main(void)
{
  cin >> n >> x >> y >> b;
  vector<ds> vec1,vec2;
  char c;
  int t1, t2;
  for(int i = 1;i <= n;++i)
  {
    ds dd;
    dd.id = i;
    getchar();
    scanf("%c%d%d",&c,&dd.v,&dd.s);
    if(c == 'M')
    {
      vec1.push_back(dd);
    } else
    {
      vec2.push_back(dd);
    }
  }
  sort(vec1.begin(), vec1.end(), cmp);
  sort(vec2.begin(), vec2.end(), cmp);
  int sumv = 0, sums = 0;
  vector<int> num;
  for(int i = 0;i < x;++i)
  {
    num.push_back(vec1[i].id);
    sumv += vec1[i].v;
    sums += vec1[i].s;
  }
  for(int i = 0;i < y;++i)
  {
    num.push_back(vec2[i].id);
    sumv += vec2[i].v;
    sums += vec2[i].s;
  }
  cout << sumv << " " << sums << endl;
  sort(num.begin(),num.end());
  cout << num[0];
  for(int i = 1;i < num.size();++i)
    cout << " " << num[i];
  cout << endl;
  return 0;
}
#endif
