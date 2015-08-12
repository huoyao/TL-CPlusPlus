// from kujiale 2015-8-12 22:21:11

#include <cstdio>
#include <iostream>
#include <ctime>
#include <set>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

unsigned long a[] =
{
  0176, 0060, 0155, 0171, 0063, 0133,
  0137, 0160, 0177, 0173
};

unsigned long b[100];

int main()
{
  int num;
  cin >> num;
  int idx = 1;
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
    cout << "Case #" << idx++ << ":";
    bool prt = false;
    for(int i = 0; i < 10; ++i)
    {
      int t = i;
      cout <<endl<< t << ">>>";
      unsigned long tmp = a[t] ^ b[0];
      int j =0;
      for(; j < n; ++j)
      {
        if(t == -1) t = 9;
        if(tmp == 0)
        {
          tmp = a[t] ^ b[j];
          --t;
          cout << "(" << a[t] << " " << b[j] << " " << tmp << ") ";
          continue;
        }
        unsigned long tmpp = a[t] ^ b[j];
        cout << "(" << a[t] << " " << b[j] << " " << tmpp << ") ";
        --t;
        if(tmpp == 0) continue;
        if(tmp != tmpp) { cout << endl;break; }
      }
      --t;
      if(t == -1) t = 9;
      if(j == n)
      {
        cout << a[t] << endl;
        prt = true;
        break;
      }
    }
    if(!prt) cout << "ERROR!" << endl;
  }
  system("pause");
  return 0;
}