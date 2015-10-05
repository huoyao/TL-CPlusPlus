/*************************************
/  FILE:ToyDuck.h
/  TIME:2015-10-01 22:19:45
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __ToyDuck_H__
#define __ToyDuck_H__
#include "Duck.h"
#include "FlyWithoutWings.h"
#include "QuackSmall.h"


class ToyDuck:public Duck {
public:
  ToyDuck() {
    fly_behaviour_ = new FlyWithoutWings();
    quack_behaviour_ = new QuackSmall();
  };

  ~ToyDuck() {
    if(!fly_behaviour_changed) {
      delete fly_behaviour_;
    }
    if(!quack_behaviour_changed) {
      delete quack_behaviour_;
    }
  };
  void Display() override;

};

#endif

