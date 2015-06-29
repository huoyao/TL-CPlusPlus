#include <iostream>
using namespace std;

int main()
{
  int x = 4;
  cout << "x="<<x << endl;
  x += x -= x - x--;
  cout << "[x += x -= x - x--]:"<<x << endl;
  x = 4;
  x += x -= x + x--;
  cout << "[x += x -= x + x--]:" << x << endl;
  x = 4;
  x += x -= x + --x;
  cout << "[x += x -= x + --x]:" << x << endl;
  return 0;
}