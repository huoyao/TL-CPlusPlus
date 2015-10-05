/*************************************
/  FILE:SimpleFactoryRun.cpp
/  TIME:2015-10-04 21:50:54
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 0

#include <iostream>
#include "SimpleFactoryStore.h"
#include "PizzaStore.h"
using namespace std;

int main()
{
  SimpleFactory::SimpleFactoryStore *simple_store = new SimpleFactory::SimpleFactoryStore();
  SimpleFactory::PizzaStore *pizza_store = new SimpleFactory::PizzaStore(simple_store);
  pizza_store->orderPizza(0);
  cout << endl;
  pizza_store->orderPizza(1);
  cout << endl;
  pizza_store->orderPizza(3);
  delete simple_store;
  delete pizza_store;
  system("pause");
  return 0;
}

#endif