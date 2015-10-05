/*************************************
/  FILE:Duck.cpp
/  TIME:2015-10-01 22:11:08
/AUTHOR:TL
/  INFO:
/*************************************/
#include "Duck.h"
#include <iostream>
using namespace std;

void Duck::Display()
{
  cout << "i am a duck\n";
}

void Duck::PerformanceFly()
{
  fly_behaviour_->Fly();
}

void Duck::PerformanceQuack()
{
  quack_behaviour_->Quack();
}

void Duck::SetFlyBehaviour(FlyBehaviour* fly)
{
  if(fly_behaviour_) delete fly_behaviour_;
  fly_behaviour_ = fly;
  fly_behaviour_changed=true;
}

void Duck::SetQuackBehaviour(QuackBehaviour* quack)
{
  if(quack_behaviour_) delete quack_behaviour_;
  quack_behaviour_ = quack;
  quack_behaviour_changed = true;
}



