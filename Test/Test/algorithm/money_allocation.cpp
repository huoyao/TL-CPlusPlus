#include <iostream>
#include <vector>
using namespace std;

int moneyAllocation(const vector<int> &money,const int &aim)
{
  const int &num = money.size();
  if(num < 1) return 0;
  vector<int> dp(aim+1, 0);
  dp[0] = 1;
  for(size_t i = 0;i <num;++i)
  {
    for(int j = 1;j <= aim;++j)
    {
      if(j - money[i] >= 0) dp[j] += dp[j - money[i]];
    }
  }
  return dp[aim];
}

int main()
{
  vector<int> vec = { 5, 10, 25, 1 };
  int target = 15;
  int res = moneyAllocation(vec, target);
  cout << "money:\n";
  for(auto it : vec) cout << it << " ";
  cout << "\nallocation num:" << res << endl;
  return 0;
}