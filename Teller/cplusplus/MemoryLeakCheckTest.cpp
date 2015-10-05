/*************************************
/  FILE:MemoryLeakCheckTest.cpp
/  TIME:2015-10-05 13:52:53
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 1

#include <iostream>
#include "MemoryLeakChecker.h"
#include "TestClassMemoryLeak.h"
#include "SonofMemoryLeakClass.h"
using namespace std;

extern void testLeakWithExplicitCheck();
extern void testLeakWithoutExplicitCheck();

int main() {
  _crtBreakAlloc = 148;  //only know the memory leak block number 147 in complex situation, use this
   TestClassMemoryLeak *A=new SonofMemoryLeakClass();

  testLeakWithoutExplicitCheck();
  testLeakWithExplicitCheck();
  
  atexit(checkMemoryLeak);  //check all leak after main() function
  system("pause");
  return 0;
}

#endif