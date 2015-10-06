///////////////////////////////////////////////////////////
//  PizzaStore.cpp
//  Implementation of the Class PizzaStore
//  Created on:      05-10ÔÂ-2015 19:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "PizzaStore1.h"
#include "Pizza1.h"

using AbstractFactory::PizzaStore;


PizzaStore::PizzaStore(){

}



PizzaStore::~PizzaStore(){

}





void PizzaStore::orderPizza(std::string type){
  Pizza *pizza = createPizza(type);
  pizza->prepare();
  pizza->content();
  if(pizza) delete pizza;
}