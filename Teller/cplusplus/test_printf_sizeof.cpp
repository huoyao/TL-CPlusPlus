#if 0

#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

void testPrintf()
{
  char c = -1;
  printf("%02x %02x\n", c, static_cast<unsigned char>(c));
}

void testSizeof()
{
  cout << "sizeof(\"\\0\")" << sizeof("\0") << endl;
  cout << "strlen(\"\\0\")" << strlen("\0") << endl;
  int *c = new int[10];
  c[0] = 1;
  cout << "sizeof(*c)" << sizeof(*c) << "  " << *c << endl;
  delete[] c;
}

int main()
{
  //testPrintf();
  //testSizeof();
  return 0;
}

#endif
