 #if 0
#include <iostream>
using namespace std;

class Singleton
{
private:
  Singleton(){}
  ~Singleton(){}
  explicit Singleton(const int &v):val(v){}
  int val;
public:
  void setVal(const int &v)
  {
    val = v;
  }
  int getVal()
  {
    return val;
  }
  static Singleton * getInstance()
  {
    static Singleton st(0);
    return &st;
  }
};

int main()
{
  Singleton *s1 = Singleton::getInstance();
  s1->setVal(1);
  Singleton *s2 = Singleton::getInstance();
  cout << "s2 val:" << s2->getVal()<<endl;
  s2->setVal(2);
  cout << "s1 val:" << s1->getVal()<<endl;
  return 0;
}
 #endif
