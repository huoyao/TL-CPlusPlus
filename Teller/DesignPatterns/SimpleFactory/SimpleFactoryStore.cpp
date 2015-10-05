///////////////////////////////////////////////////////////
//  SimpleFactoryStore.cpp
//  Implementation of the Class SimpleFactoryStore
//  Created on:      04-10ÔÂ-2015 21:49:57
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "SimpleFactoryStore.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"

using SimpleFactory::SimpleFactoryStore;


SimpleFactoryStore::SimpleFactoryStore(){

}

SimpleFactoryStore::~SimpleFactoryStore(){
  if(pizza) delete pizza;
}

SimpleFactory::Pizza* SimpleFactoryStore::createPizza(int type)
{
  switch (type)
  {
  case 0:
    pizza = new CheesePizza();
    break;
  case 1:
    pizza = new VeggiePizza();
    break;
  default:
    pizza = nullptr;
    break;
  }
  return pizza;
}
