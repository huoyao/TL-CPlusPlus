#include <iostream>
using namespace std;

class A
{
public:
  A(){ cout << "constructor A" << endl; }
  virtual ~A(){ cout << "destructor A" << endl; }
};

class B:public A
{
public:
  B(){ cout << "constructor B" << endl; }
  ~B(){ cout << "destructor B" << endl; }
};

int main()
{
  //A &ref_a = B();

  //A *ptr_a = new B();
  //delete ptr_a;

  A *ptr_aa = new A();
  B *ptr_b = dynamic_cast<B *> (ptr_aa);
  delete ptr_b;
  //delete ptr_aa;
  return 0;
}