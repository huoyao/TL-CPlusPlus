#if 0
/*
*给定三种硬币1,3,5，然后给定一个面值x
*问：最少需要多少个硬币组合成x，不能组合返回-1
*/

#include <iostream>
#include <algorithm>
using namespace std;

int combinationNumbers(const int &x)
{
  if(x < 1) return -1;
  int *min_num = new int[x+5];
  min_num[1] =min_num[3]=min_num[5]= 1;
  min_num[2] = min_num[4] = 2;
  for(size_t i = 6;i <= x;++i)
    min_num[i] = min(min_num[i - 1], min(min_num[i-3], min_num[i-5]))+1;
  int res = min_num[x];
  delete[] min_num;
  return res;
}

int main()
{
  int x = 4;
  int res = combinationNumbers(x);
  cout << res << endl;
  return 0;
}
#endif
