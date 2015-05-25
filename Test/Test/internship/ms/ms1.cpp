#include <iostream>
#include <string>
using namespace std;

bool isOk(int x, int y, int z, int R, int B, int Y)
{
  int rb = R - B > 0 ? R - B : B - R;
  int ry = R - Y > 0 ? R - Y : Y - R;
  int by = B - Y > 0 ? B - Y : Y - B;
  if(rb == x && ry == y && by == z)
    return true;
  if(rb == x && ry == z && by == y)
    return true;
  if(rb == y && ry == x && by == z)
    return true;
  if(rb == y && ry == z && by == x)
    return true;
  if(rb == z && ry == x && by == y)
    return true;
  if(rb == z && ry == y && by == x)
    return true;
  return false;
  
}

int main()
{
  int x, y, z;
  int R, Y, B;
  string sequence;
  int result;
  int temp;
  cin >> x >> y >> z;
  R = Y = B = 0;
  result = 0;
  temp = -1;
  cin >> sequence;
  for(int i = 0; i < sequence.length(); ++i)
  {
    if(sequence[i] == 'R')
      ++R;
    else if(sequence[i] == 'B')
      ++B;
    else
      ++Y;
    if(i - temp > result)
      result = i - temp;
    if(isOk(x, y, z, R, B, Y))
    {
      temp = i;
      R = 0;
      B = 0;
      Y = 0;
    }

  }
  cout << result << endl;
  return 0;
}
