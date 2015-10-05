/*************************************
/  FILE:Strategy.cpp
/  TIME:2015-10-01 22:27:56
/AUTHOR:TL
/  INFO:
/*************************************/

#if 0
#include <iostream>
#include "Duck.h"
#include "RedHeadDuck.h"
#include "ToyDuck.h"  
#include "../MemoryLeakChecker.h"
using namespace std;

int main()
{
  Duck *red_duck = new RedHeadDuck();
  red_duck->Display();
  red_duck->PerformanceFly();
  red_duck->PerformanceQuack();

  cout << endl;

  FlyBehaviour *new_fly = new FlyWithoutWings();
  red_duck->SetFlyBehaviour(new_fly);
  QuackBehaviour *new_quak = new QuackSmall();
  red_duck->SetQuackBehaviour(new_quak);
  red_duck->Display();
  red_duck->PerformanceFly();
  red_duck->PerformanceQuack();

  delete new_fly;
  delete new_quak;
  delete red_duck;
  atexit(checkMemoryLeak);
  system("pause");
  return 0;
}

#endif