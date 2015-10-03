/*************************************
/  FILE:FlyWithoutWings.h
/  TIME:2015-10-01 22:04:33
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __FlyWithoutWings_H__
#define __FlyWithoutWings_H__
#include "FlyBehaviour.h"

class FlyWithoutWings:public FlyBehaviour
{
public:
  FlyWithoutWings()
  {
  };

  ~FlyWithoutWings()
  {
  };
  void Fly() override; 
};

#endif

