#if 0
#include <iostream>
#include <vector>
using namespace std;

void sort3(vector<int> &vec)
{
  int start = 0, end = vec.size() - 1,idx=0;
  int len = vec.size();
  while(idx <= end)
  {
    if(idx == start)
      ++idx;
    else if(vec[idx] < 0)
      swap(vec[start++], vec[idx]);
    else if(vec[idx]>0)
      swap(vec[end--], vec[idx]);
    else 
      ++idx;
  }
}

int main()
{
  vector<int> vec = { 1,-1,0, 0, 1, - 1 };
  sort3(vec);
  for(auto t : vec) cout << t << " ";
  return 0;
}
#endif
