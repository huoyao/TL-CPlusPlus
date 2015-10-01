#if 0

#include <iostream>
using namespace std;

class StackOnly
{
private:
  void *operator new(size_t size)
  {
    return nullptr;
  };
};

class HeapOnly
{
public:
  static HeapOnly & getInstance()
  {
    HeapOnly *hp = new HeapOnly();
    return *hp;
  }
  void destroy() {this->~HeapOnly();};
private:
  HeapOnly() {};
  ~HeapOnly() {};
};

int main()
{
  //error: 'static void* StackOnly::operator new(size_t)' is private
  //StackOnly *p_stack = new StackOnly();
  StackOnly st;

  //error: 'HeapOnly::HeapOnly()' is private
  //HeapOnly hp;
  HeapOnly *hp = &HeapOnly::getInstance();
  hp->destroy();
  system("pause");
  return 0;
}

#endif
