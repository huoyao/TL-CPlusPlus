#if 0
/*
*��������Ӳ��1,3,5��Ȼ�����һ����ֵx
*�ʣ�������Ҫ���ٸ�Ӳ����ϳ�x��������Ϸ���-1
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
