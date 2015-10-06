/*************************************
/  FILE:SingletonRun.cpp
/  TIME:2015-10-06 13:08:47
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 1

#include <iostream>
#include "../MemoryLeakChecker.h"
#include "Singleton0.h"
#include "Singleton1.h"
using namespace std;

int main() {
  Singleton::Singleton0 *singleton0 = Singleton::Singleton0::getInstance();
  singleton0->setValue(1);
  cout << singleton0->getValue()<<endl;
  Singleton::Singleton1 *singleton1 = Singleton::Singleton1::getInstance();
  singleton1->setValue(2);
  cout << singleton1->getValue() << endl;
  Singleton::Singleton1 *singleton2 = Singleton::Singleton1::getInstance();
  cout << singleton2->getValue() << endl;
  delete singleton0;
  delete singleton1;
  atexit(checkMemoryLeak);
  system("pause");
  return 0;
}

#endif