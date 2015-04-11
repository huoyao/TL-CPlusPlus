#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  vector<int> vec;
  int data,cnt=1;
  while(cin >> data)
  {
    vec.push_back(data);
    if(data == cnt)
    {
      sort(vec.begin(),vec.end());
      int i = 0;
      bool first = true;
      for(;i < vec.size();++i)
      {
        if(vec[i] == cnt)
        {
          if(!first)cout << ",";
          cout << vec[i];
          cnt++;
          first = false;
        } else
          break;
      }
      cout << endl;
      vec = vector<int>(vec.begin() + i, vec.end());
    }
  }
  return 0;
}
