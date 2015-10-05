/*************************************
/  FILE:SonofMemoryLeakClass.h
/  TIME:2015-10-05 14:16:15
/AUTHOR:huoyao
/  INFO:
/*************************************/

#ifndef __SonofMemoryLeakClass_H__
#define __SonofMemoryLeakClass_H__
#include "TestClassMemoryLeak.h"

class SonofMemoryLeakClass:public TestClassMemoryLeak {
public:
  SonofMemoryLeakClass() {
    p = new int;
  }
  ~SonofMemoryLeakClass(){};
};

#endif
