#if 0

#include <iostream>
#include <cstdlib>
using namespace std;

class MemberFunctionPointor
{
public:
  MemberFunctionPointor();
  ~MemberFunctionPointor();
  int getVal()
  {
    return val;
  }
  void printInfo()
  {
    cout << "no this pointor reference" << endl;
  }
private:
  int val;
};

int main()
{
  MemberFunctionPointor *m_ptr = nullptr;
  m_ptr->printInfo();  // is ok, for no "this" pointor reference

  //int value = m_ptr->getVal();  //compile is ok, runtime crashed for "this" pointor reference

  system("pause");
  return 0;
}

#endif
