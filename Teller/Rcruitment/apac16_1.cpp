#if 0
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <memory>
#include <map>
#include <queue>
#include <fstream>
using namespace std;

string str = "0";

string rev(const string &str)
{
  string out;
  for (int i = str.length() - 1; i >= 0; --i)
    out += str[i];
  return out;
}

string swith(string str)
{
  for (size_t i = 0; i < str.length(); i++)
  {
    str[i] = str[i] == '0' ? '1' : '0';
  }
  return str;
}

int main()
{
  //ifstream ifs("s_1.txt", std::ifstream::in);
  ifstream ifs("A-large.in");
  ofstream ofs("out1_1.txt");
  int t;
  ifs >> t;
  while (str.length() < 1000000000000000008)
  {
    str = str + '0' + swith(rev(str));
  }

  for (size_t i = 0; i < t; i++)
  {
    int m;
    ifs >> m;
    ofs << "Case #" << i + 1 << ": " << str[m - 1] << endl;
  }
  ifs.close();
  ofs.close();
  return 0;
}
#endif
