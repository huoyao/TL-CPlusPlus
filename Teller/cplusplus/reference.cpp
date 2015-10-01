 #if 0
#include <iostream>
using namespace std;

int g_var = 0;

void funca(const int &a)
{
  g_var = a;
}

void test_reference()
{
  const int &a = 2 + 4;
  funca(a);
  cout << "g_var:" << g_var << endl;
}

int main()
{
  test_reference();
  return 0;
}
 #endif
