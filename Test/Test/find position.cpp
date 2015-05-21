#include <iostream>
#include <vector>
using namespace std;

int find_pos(const vector<int> &vec,const int &target)
{
  int resid = 0;
  while(resid<vec.size() && vec[resid] != target)
  {
    resid += target - vec[resid];
  }
  if(resid >= vec.size()) return -1;
  else return resid;
}

int main()
{
  vector<int> vec = { 1, 2, 1, 2, 1, 2, 3, 4, 5, 4 };
  int target = 4;
  for(auto t : vec)
    cout << t << " ";
  cout << endl;
  cout << "postion:" << find_pos(vec,target);
  cout << endl;
  return 0;
}