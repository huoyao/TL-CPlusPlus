/*************************************
/  FILE:AbstractFactoryRun.cpp
/  TIME:2015-10-05 19:50:52
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 0

#include <iostream>
#include "../MemoryLeakChecker.h"
#include "NYPizzaStore0.h"
#include "ChicagoPizzaStore0.h"
using namespace std;

int main() {
  AbstractFactory::PizzaStore *ny_pizza_store = new AbstractFactory::NYPizzaStore();
  ny_pizza_store->orderPizza("cheese");
  ny_pizza_store->orderPizza("veggie");

  delete ny_pizza_store;
  ny_pizza_store = new AbstractFactory::ChicagoPizzaStore();
  ny_pizza_store->orderPizza("cheese");
  ny_pizza_store->orderPizza("veggie");
  delete ny_pizza_store;
  atexit(checkMemoryLeak);
  system("pause");
  return 0;
}

#endif