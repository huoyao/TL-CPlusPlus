#if 0

#include "template.h"
#include <iostream>
using namespace std;

void testClamp()
{
  double a = 2, b = 3, c = 4;
  clamp(0., 1., a, b);
  clamp(0., 1., a, b, c);
}


int main()
{
  //for template class 
  TemplateClass<int> *tmp = new TemplateClass<int>();
  TemplateClass<double> tmp2(1.1);
  cout << "tmp2:" << tmp2.getData() << endl;
  tmp->setData(1);
  //cout << tmp->getData() << endl;

  //for template function  test
  int a = 1, b = 2;
  int c = addElem(a, b),d=addElem<int>(a,b);
  cout << "function template:" << c<<","<<d << endl;
  for(int i = 0;i < 10;++i)
  {
    cout << i << " " << endl;
  }
  testClamp();
  
  return 0;
}

#endif
