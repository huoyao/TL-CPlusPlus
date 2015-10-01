#if 0
#include <iostream>
using namespace std;

class Solution {
public:
  void reOrderArray(vector<int> &array) {
    const int & siz = array.size();
    if (siz < 3) return ;
    bool even = siz && 0x1;
    int half = siz >> 1;
    int offset = even ? half - 1 : half;
    for (int i = 1; i < siz; ++i)
    {

    }
  }
};

int int main(int argc, char const *argv[])
{
  Solution slu;
  std::vector<int> v = {1, 2, 3, 4, 5};
  slu.reOrderArray(v);
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  system("pause");
  return 0;
}
#endif
