///////////////////////////////////////////////////////////
//  PizzaStore.cpp
//  Implementation of the Class PizzaStore
//  Created on:      05-10ÔÂ-2015 14:49:17
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "PizzaStore.h"
#include <iostream>

using FactoryMethod::PizzaStore;


PizzaStore::PizzaStore(){

}



PizzaStore::~PizzaStore(){

}





void PizzaStore::orderPizza(std::string type){
  Pizza *pizza = createPizza(type);
  pizza->prepare();
  pizza->box();
  std::cout << std::endl;
  if(pizza) delete pizza;
}