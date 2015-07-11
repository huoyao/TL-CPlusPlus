#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  string str;
  str.reserve(505);
  while(1)
  {
    map<char, int> char_num;
    getline(cin, str);
    printf("%s\n", str.c_str());
    if(str.size() == 0) return 0;
    size_t i = 0;
    for(; i < str.length(); ++i)
    {
      if(isdigit(str[i]) || islower(str[i]))
        ++char_num[str[i]];
      else break;
    }
    if(i < str.length()) { printf("<invalid input string>\n"); continue; }
    while(1)
    {
      bool stop = true;
      for(map<char, int>::iterator it = char_num.begin(); it != char_num.end(); ++it)
      if(it->second > 0)
      {
        printf("%c", it->first);
        stop = false;
        --it->second;
      }
      if(stop) { printf("\n"); break; }
    }
  }
  return 0;
}
