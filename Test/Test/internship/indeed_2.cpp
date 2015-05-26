#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>
using namespace std;

int t[10005];

void trans1(int t[],int ten,int &id,int rec,bool shun)
{
  if(shun)
  {
    for(int i = 0;i < rec;++i)
    {
      t[id++] = ten + t[i];
    }
  } else
  {
    for(int i = rec - 1;i >= 0;--i)
    {
      t[id++] = ten + t[i];
    }
  }
  
}

void trans2(int t[], int ten, int &id, int rec)
{
  
}

void print(int num,int n)
{
  string ss = to_string(num);
  int cnt = n - ss.length();
  string out = string(cnt,'0')+ss;
  printf("%s\n",out.c_str());
}

int main()
{
  int n;
  scanf("%d",&n);
  int id = 0;
  int ten = 1;
  for(int i = 0;i < 10;++i) t[id++] = i;
  bool shun = true;
  for(int i = 0;i < n-1;++i)
  {
    int rec = id;
    ten *= 10;
    for(int j = 1;j < 10;j++)
    {
      shun = !shun;
      trans1(t,ten*j,id,rec,shun);
    }
  }
  ten *= 10;
  printf("%d\n",ten-1);
  for(int i = 10;i < ten +10;++i)
    print(t[i],n);
  return 0;
}