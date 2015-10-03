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
using namespace std;

int main()
{
  Duck *red_duck = new RedHeadDuck();
  red_duck->Display();
  red_duck->PerformanceFly();
  red_duck->PerformanceQuack();

  cout << endl;

  red_duck->SetFlyBehaviour(new FlyWithoutWings());
  red_duck->SetQuackBehaviour(new QuackSmall());
  red_duck->Display();
  red_duck->PerformanceFly();
  red_duck->PerformanceQuack();

  system("pause");
  return 0;
}

#endif