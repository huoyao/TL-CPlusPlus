#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void test_sizeof()
{
  string str("ÖÐÎÄ");
  cout << str.size() << endl;
  string *s = new string();
  cout << sizeof(*s) << " " << sizeof(s) << endl;
  *s = "123456789211111111111112222222222222111111111111111111111111111111111111111111111111111111";
  cout << sizeof(*s) << " " << sizeof(s) << endl;
  char *c = "12312333333333333333333";
  cout << sizeof(str) << endl;
  cout << sizeof(*c) << endl;
  cout << *s << endl;
  delete s;
}

template <class T>
void print_info(const T&object, const size_t &mode)
{
  if (mode && 0x1)
    cout << object << " capacity:" << object.capacity() << endl;
}

void test_capacity()
{
  string str;
  str = "123";
  print_info(str, 0x1);
  str += "456789123456";
  print_info(str, 0x1);
  str += "ddddddddddd";
}

int main()
{
  test_sizeof();
  test_capacity();
  getchar();
  return 0;
}