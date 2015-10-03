/*************************************
/  FILE:RedHeadDuck.h
/  TIME:2015-10-01 22:18:13
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __RedHeadDuck_H__
#define __RedHeadDuck_H__
#include "Duck.h"
#include "FlyWithWings.h"
#include "QuackLoud.h"


class RedHeadDuck:public Duck
{
public:
  RedHeadDuck()
  {
    fly_behaviour_ = new FlyWithWings();
    quack_behaviour_ = new QuackLoud();
  };

  ~RedHeadDuck()
  {
  };
  void Display() override;
  
};

#endif

