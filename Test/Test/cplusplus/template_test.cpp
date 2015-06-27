#include "template.h"
#include <iostream>
using namespace std;

int main()
{
  //for template class 
  TemplateClass<int> *tmp = new TemplateClass<int>();
  TemplateClass<double> tmp2(1.1);
  cout << "tmp2:" << tmp2.getData() << endl;
  tmp->setData(1);
  cout << tmp->getData() << endl;

  //for template function  test
  int a = 1, b = 2;
  int c = addElem(a, b),d=addElem<int>(a,b);
  cout << "function template:" << c<<","<<d << endl;
  for(int i = 0;i < 10;++i)
  {
    cout << i << " " << endl;
  }
  return 0;
}