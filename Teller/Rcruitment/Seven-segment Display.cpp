#if 0
// from kujiale 2015-8-12 22:21:11

#include <cstdio>
#include <iostream>
#include <ctime>
#include <set>
#include <cmath>
#include <cstdlib>
#include <string>
#include <bitset>
#include <iomanip>
#include <fstream>
using namespace std;

unsigned char a[] =
{
  0176, 0060, 0155, 0171, 0063, 0133,
  0137, 0160, 0177, 0173
};

unsigned char b[100];

int main()
{
  int num;
  cin >> num;
  int idx = 1;
  ofstream ofstr("out.txt");
  while(num--)
  {
    int n;
    cin >> n;
    string c;
    for(int i = 0; i < n; ++i)
    {
      cin >> c;
      b[i] = strtoul(c.c_str(), NULL, 2);
    }
    ofstr << "Case #" << idx++ << ": ";
    int cnt = 0;
    int record;
    unsigned long tmp_record;
    for(int i = 0; i < 10; ++i)
    {
      int t=i;
      unsigned long tmp = 0;
      int j =0;
      for(; j < n; ++j)
      {
        if(t == -1) t = 9;
        tmp|= a[t] ^ b[j];
          --t;
      }
      j = 0;
      if(tmp != 0)
      {
        for(;j < n;++j)
          if(tmp&b[j]) break;
      }
      if(t == -1) t = 9;
      if(tmp==0 || j == n)
      {
        record = t;
        tmp_record = tmp;
        ++cnt;
      }
    }
    if(cnt != 1) ofstr << "ERROR!" << endl;
    else ofstr << bitset<7>(a[record] & (~tmp_record)) << endl;
  }
  ofstr.close();
  system("pause");
  return 0;
}
#endif
