#if 0
// Roman2Integer.cpp : Defines the entry point for the console application.
//
/*
    version: 1.0
    author: hellogiser
    blog: http://www.cnblogs.com/hellogiser
    date: 2014/5/26
*/

#include <string>
#include <iostream>
#include <map>
#include <assert.h>
using namespace std;

// roman to integer
unsigned int roman2integer(string str)
{
  // 99 -->10,100,1,10
  // 66 --->50,10,5,1
  if (str == "")
    return 0;
  map<char, int> m;
  m['I'] = 1;
  m['V'] = 5;
  m['X'] = 10;
  m['L'] = 50;
  m['C'] = 100;
  m['D'] = 500;
  m['M'] = 1000;

  int sum = m[str[0]];
  int len = str.length();
  for (int i = 0; i < len - 1; i++)
  {
    if (m[str[i]] >= m[str[i + 1]])
    {
      // m[i]>=m[i+1], then add m[i+1] to sum
      sum = sum + m[str[i + 1]];
    }
    else
    {
      // m[i]<m[i+1], then add m[i+1] to sum, and remove 2*m[i]
      sum = sum + m[str[i + 1]] - 2 * m[str[i]];
    }
  }
  return sum;
}

#define MAX 3999

// integer to roman
string integer2roman(unsigned int n)
{
  // we should consider 4,9,40,90,400,900
  string result = "";
  if (n < 1 || n > MAX)
    return result;

  unsigned int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  unsigned int length = sizeof(val) / sizeof(int);
  string r[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

  for (int i = 0; i < length; i++)
  {
    while (n >= val[i])
    {
      result += r[i];
      n -= val[i];
    }
  }
  return result;
}

// test case for two functions
void test_case(int n)
{
  for (int i = 1; i <= n; i++)
  {
    string roman = integer2roman(i);
    cout << roman << " " << i << endl;
    int integer = roman2integer(roman);
    assert(i == integer);
  }
}

void test_main()
{
  //test_case(20);
  test_case(MAX);
}

int main()
{
  test_main();
  system("pause");
  return 0;
}
#endif
