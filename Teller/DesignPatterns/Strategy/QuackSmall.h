/*************************************
/  FILE:QuackSmall.h
/  TIME:2015-10-01 22:09:11
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __QuackSmall_H__
#define __QuackSmall_H__
#include "QuackBehaviour.h"


class QuackSmall:public QuackBehaviour
{
public:
  QuackSmall()
  {
  };

  ~QuackSmall()
  {
  };
  void Quack() override;
};

#endif

