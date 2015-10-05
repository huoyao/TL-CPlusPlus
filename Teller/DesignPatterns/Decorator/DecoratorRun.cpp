/*************************************
/  FILE:DecoratorRun.cpp
/  TIME:2015-10-04 20:21:31
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 0

#include <iostream>
#include "Beverage.h"
#include "DarkRoast.h"
#include "Milk.h"
#include "Mocha.h"
#include "HouseBlend.h"
#include "../MemoryLeakChecker.h"
using namespace std;

int main()
{
  //has memory leak
  Decorator::Beverage *beverage0 = new Decorator::Milk(new Decorator::Milk(new Decorator::Mocha(new Decorator::DarkRoast())));
  cout << "name:" << beverage0->getDescription() << ",cost:" << beverage0->cost() << endl;
  delete beverage0;

  Decorator::Beverage *beverage1 = new Decorator::HouseBlend();
  Decorator::Beverage *beverage2 = new Decorator::Mocha(beverage1);
  Decorator::Beverage *beverage3 = new Decorator::Milk(beverage2);
  cout << "name:" << beverage3->getDescription() << ",cost:" << beverage3->cost() << endl;
  delete beverage1;
  delete beverage2;
  delete beverage3;

  atexit(checkMemoryLeak);
  system("pause");
  return 0;
}

#endif
