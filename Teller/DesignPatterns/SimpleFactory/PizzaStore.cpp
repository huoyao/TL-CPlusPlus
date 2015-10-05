///////////////////////////////////////////////////////////
//  PizzaStore.cpp
//  Implementation of the Class PizzaStore
//  Created on:      04-10ÔÂ-2015 21:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "PizzaStore.h"
#include <iostream>

using SimpleFactory::PizzaStore;


PizzaStore::PizzaStore() {

}



PizzaStore::~PizzaStore() {

}





void PizzaStore::orderPizza(int type) {
  Pizza *pizza;
  pizza = simple_factory_->createPizza(type);
  if(pizza == nullptr) {
    std::cout << "no such pizza\n";
    return;
  }
  pizza->prepare();
  pizza->bake();
  pizza->box();
}