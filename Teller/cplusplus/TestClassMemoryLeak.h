/*************************************
/  FILE:TestClassMemoryLeak.h
/  TIME:2015-10-05 14:08:26
/AUTHOR:huoyao
/  INFO:
/*************************************/

#ifndef __TestClassMemoryLeak_H__
#define __TestClassMemoryLeak_H__


class TestClassMemoryLeak {
public:
  TestClassMemoryLeak() {
  };

  ~TestClassMemoryLeak() {};

protected:
  int *p;
};

#endif

