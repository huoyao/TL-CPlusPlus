#if 0
////////////////////////////////////////////////
//
//  在一个数组中，有三个数只出现了一次，其余数都
//  出现了2次，找出这三个数。
//
///////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

int findFirstNum(const vector<int> &vec)
{
  int bit = 1;
  for(size_t r = 0;r < 32;++r)
  {
    int num1 = 0, num2 = 0, cnt1 = 0, cnt2 = 0;
    for(size_t i = 0;i < vec.size();++i)
    {
      if((vec[i] & bit) != 0)
      {
        num1 ^= vec[i];
        ++cnt1;
      } else
      {
        num2 ^= vec[i];
        ++cnt2;
      }
    }
    if((cnt1 & 0x1) == 1)
    {
      if(num2 == 0)continue;
      else return num1;
    } else
    {
      if(num1 == 0) continue;
      else return num2;
    }
  }
}

int findFirstBit1(const int &num)
{
  int tmp = num&(num - 1);
  tmp ^= num;
  return tmp;
}

vector<int> findUnique3(const vector<int> &input)
{
  const size_t &len = input.size();
  if(len < 3 || (len & 0x1) == 0) return vector<int>();
  int num0 = findFirstNum(input), num1 = 0, num2 = 0, num = 0;
  for(size_t i = 0;i < len;++i)
    num ^= input[i];
  num ^= num0;
  if(num == 0) return vector<int>();
  int first_bit_one = findFirstBit1(num);
  for(size_t i = 0;i < len;++i)
  {
    if((input[i] & first_bit_one) != 0) num1 ^= input[i];
    else num2 ^= input[i];
  }
  if((num0&first_bit_one) != 0)num1 ^= num0;
  else num2 ^= num0;
  vector<int> res = { num0, num1, num2 };
  return res;
}

int main()
{
  vector<int> input_array = { 7};
  vector<int> res = findUnique3(input_array);
  for(auto t : res)
    cout << t << " ";
  cout << endl;
  return 0;
}
#endif
