#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

class A
{
public:
  A(){};
  ~A(){};
};

void strAnalysis()
{
  const char *ptr= "tx";
  char cc[] = "tx";
  if("tx" == ptr) cout << "\"tx\"==ptr" << endl;
  else cout << "\"tx\"!=ptr" << endl;
  if("tx" == cc) cout << "\"tx\"==cc" << endl;
  else cout << "\"tx\"!=cc" << endl;
  if(0== strcmp(ptr,"tx")) cout << "ptr strcmp ok" << endl;
  else cout << "ptr strcmp fail" << endl;
  if(0 == strcmp(cc, "tx")) cout << "cc strcmp ok" << endl;
  else cout << "cc strcmp fail" << endl;
  if(ptr == cc) cout << "ptr == cc" << endl;
  else cout << "ptr != cc" << endl;
}

void sizeofTest()
{
  char *str = "123";
  cout << "sizeof(str):" << sizeof(str) << endl;
}

int main()
{
  A a;
  cout << "Empty class size:" << sizeof(a) << endl;
  strAnalysis();
  sizeofTest();
}