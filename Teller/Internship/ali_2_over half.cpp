#if 0
#include <iostream>
#include <algorithm>
using namespace std;

bool isOverHalf(const int a[],const int n)
{
  if(n <= 0) return false;
  int haf = n >> 1;
  if(a[0] == a[haf]) return true;
  int l = min(haf+1,n-1), r = n - 1;
  while(l < r)
  {
    int mid = (l + r) >> 1;
    if(a[mid] == a[haf]) l = mid + 1;
    else r = mid - 1;
  }
  return a[r] == a[r - haf];
}

int main()
{
  int a[] = {1,1,2,2};
  bool tag = isOverHalf(a,4);
  cout << "IS OVER:" << tag << endl;
  return 0;
}
#endif
