#include <iostream>
using namespace std;

void func(const int &a,const int &b)
{
  cout << a << " " << b << endl;
}

int main()
{
  func(4, 5);
  int bb[4];
  int aa[5];
  for(int i = 0; i < 6; i++)
  {
    //aa[i] = i;
    cout << aa[i] << endl;
  }
  return 0;
}
