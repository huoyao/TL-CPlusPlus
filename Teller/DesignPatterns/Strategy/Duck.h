/*************************************
/  FILE:Duck.h
/  TIME:2015-10-01 22:11:08
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __Duck_H__
#define __Duck_H__
#include "FlyBehaviour.h"
#include "QuackBehaviour.h"


class Duck
{
public:
  Duck():fly_behaviour_changed(false),quack_behaviour_changed(false)
  {
  };

  virtual ~Duck()
  {
  };
  void PerformanceFly();
  void PerformanceQuack();
  void SetFlyBehaviour(FlyBehaviour *);
  void SetQuackBehaviour(QuackBehaviour *);
  virtual void Display();
protected:
  FlyBehaviour *fly_behaviour_;
  QuackBehaviour *quack_behaviour_;
  bool fly_behaviour_changed;
  bool quack_behaviour_changed;
};

#endif

