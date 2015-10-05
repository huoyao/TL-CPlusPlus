/*************************************
/  FILE:TestLeakWithoutExplicitCheck.cpp
/  TIME:2015-10-05 13:58:27
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 1

#include <iostream>
#include "MemoryLeakChecker.h"
using namespace std;

void testLeakWithoutExplicitCheck() {
  cout << "\nTest Leak Without Explicit Check\n";
  int *p = new int;
}

#endif