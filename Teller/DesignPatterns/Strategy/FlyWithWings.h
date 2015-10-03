/*************************************
/  FILE:FlyWithWings.h
/  TIME:2015-10-01 22:00:49
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __FlyWithWings_H__
#define __FlyWithWings_H__
#include "FlyBehaviour.h"


class FlyWithWings:public FlyBehaviour
{
public:
  FlyWithWings()
  {
  };

  ~FlyWithWings()
  {
  };
  void Fly() override;
};

#endif

