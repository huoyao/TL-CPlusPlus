/*************************************
/  FILE:FactoryMethodRun.cpp
/  TIME:2015-10-05 14:51:45
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 0

#include <iostream>
#include "../MemoryLeakChecker.h"
#include "PizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
using namespace std;

int main() {
  FactoryMethod::PizzaStore *pizza_store = new FactoryMethod::NYPizzaStore();
  pizza_store->orderPizza("cheese");
  pizza_store->orderPizza("veggie");
  cout << endl;

  delete pizza_store;
  pizza_store = new FactoryMethod::ChicagoPizzaStore();
  pizza_store->orderPizza("cheese");
  pizza_store->orderPizza("veggie");
  cout << endl;

  delete pizza_store;
  atexit(checkMemoryLeak);
  system("pause");
  return 0;
}

#endif