#if 0

#include <iostream>
#include <string>
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

void testCharArray()
{
  char a[] = "hello";
  char b[] = "world";
  char *p = "const char";
  const char * p1 = a;
  char * const p2 = b;
  p2[0] = 'h';
  char c = *p++;
  cout << c << endl;
  //p[0] = 'g';  //不能被修改
}

int main()
{
  test_sizeof();
  test_capacity();
  testCharArray();
  getchar();
  return 0;
}

#endif
