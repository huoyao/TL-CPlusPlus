/*************************************
/  FILE:TestLeakWithExplicitCheck.cpp
/  TIME:2015-10-05 13:55:39
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 1

#include <iostream>
#include "MemoryLeakChecker.h"
using namespace std;

void testLeakWithExplicitCheck() {
  cout << "\nTest Leak With Explicit Check\n";
  int *p = new int;
  checkMemoryLeak();
}

#endif