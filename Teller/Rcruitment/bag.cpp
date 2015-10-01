#if 0
#include <iostream>
#include <vector>
#include <memory>
#include <cstring>
using namespace std;

vector<int> bag(vector<int> &vec, const int &wet, const int &num)
{
  vector<int> ret;
  const int n = wet, m = num;
  int **dp = new int*[num + 1];
  for (int i = 0; i <= num; ++i)
  {
    dp[i] = new int[wet + 1];
    memset(dp[i], 0, sizeof(int) * (wet + 1));
  }
  for (int i = 0; i < num + 1; ++i)
  {
    dp[i][0] = 1;
  }
  for (int i = 1; i <= num; ++i)
  {
    for (int j = 1; j <= wet; ++j)
    {
      if (j >= vec[i - 1]) dp[i][j] = dp[i - 1][j] || dp[i - 1][j - vec[i - 1]];
      else dp[i][j] = dp[i - 1][j];
    }
  }
  int remain = wet, i = num - 1;
  while (remain && i >= 0)
  {
    if (remain >= vec[i] && dp[i][remain - vec[i]])
    {
      ret.push_back(i);
      remain -= vec[i];
    }
    --i;
  }
  return ret;
}

int main(int argc, char const *argv[])
{
  std::vector<int> v = {1, 2, 4, 5, 3, 6};
  int weight = 12, num = v.size();
  vector<int> ret = bag(v, weight, num);
  for (int i = 0; i < ret.size(); ++i)
  {
    cout << ret[i] << " ";
  }
  system("pause");
  return 0;
}
#endif
