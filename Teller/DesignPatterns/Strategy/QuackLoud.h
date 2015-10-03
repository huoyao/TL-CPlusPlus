/*************************************
/  FILE:QuackLoud.h
/  TIME:2015-10-01 22:06:34
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __QuackLoud_H__
#define __QuackLoud_H__
#include "QuackBehaviour.h"


class QuackLoud:public QuackBehaviour
{
public:
  QuackLoud()
  {
  };

  ~QuackLoud()
  {
  };
  void Quack() override;
};

#endif

