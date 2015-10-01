#if 0
#include <iostream>
#include <cstdio>
#include <map>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

int main()
{
  int n;
  map<char, int> cmap;
  //char input[100005];
  for(int i = 0;i < 26;++i)
  {
    cmap.insert(make_pair<char, int>('a' + i, i + 1));
  }
  scanf("%d", &n);
  string input;
  //const char input[10005];
  getchar();
  for(int i = 0;i < n;++i)
  {
    getline(cin,input);
    //input = str.c_str();
    //input += '\0';
    int j = 0;
    char c;
    c = tolower(input[0]);
    int k = 0;
    char d;
    long long  val = 0;
    while(input[j])
    {
      if(input[j] >='a' && input[j]<='z')
      {
        k++;
      }else if(input[j]>='A' && input[j] <= 'Z')
      {
        k += 2;
      }
      if(input[j + 1]=='\0' || tolower(input[j + 1]) != c)
      {
        val += k*k*cmap[tolower(input[j])];
        c = tolower(input[j + 1]);
        k = 0;
      }
      ++j;
    }
    printf("%lld\n",val);
  }
  return 0;
}
#endif
