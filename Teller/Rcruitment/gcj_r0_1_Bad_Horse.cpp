#if 0
#include <iostream>
#include <unordered_map>
#include <cstdio>
#include <fstream>
using namespace std;

int father[205];

int get_p(const int &t)
{
  int x=t;
  while(father[x]!=x)
    x=father[x];
  int r=t;
  while(father[r]!=x) 
  {
    int tmp=father[r];
    father[r]=x;
    r=tmp;
  }
  return x;
}

void join(const int &a,const int &b)
{
  int h1=get_p(a);
  int h2=get_p(b);
  if(h1<h2) father[h1]=h2;
  else father[h2]=h1;
}

int main()
{
  int t,m;
  cin>>t;
  ofstream ofs("out1.txt");
  for (int i = 0; i < t; ++i)
  {
    scanf("%d",&m);
    int cnt=0;
    for (int j = 0; j < 205; ++j)
    {
      father[j]=j;
    }
    unordered_map<char * , int> mp;
    char s1[50],s2[50];
    for (int j = 0; j < m; ++j)
    {
      scanf("%s%s",s1,s2);
      if(!mp.count(s1)) {mp[s1]=cnt;++cnt;}
      if(!mp.count(s2)) {mp[s2]=cnt;++cnt;}
      join(mp[s1],mp[s2]);
    }
    int all=0;
    for (int j = 0; j < cnt; ++j)
    {
      if(father[j]==j)++all;
    }
    ofs<<"Case #"<<i+1<<": ";
    if(all==2)ofs<<"Yes"<<endl;
    else ofs<<"No"<<endl;
  }
  ofs.close();
  return 0;
}
#endif
