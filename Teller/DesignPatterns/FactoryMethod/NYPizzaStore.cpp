///////////////////////////////////////////////////////////
//  NYPizzaStore.cpp
//  Implementation of the Class NYPizzaStore
//  Created on:      05-10ÔÂ-2015 14:49:16
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "NYPizzaStore.h"
#include "NYCheesePizza.h"
#include "NYVeggiePizza.h"

using FactoryMethod::NYPizzaStore;


NYPizzaStore::NYPizzaStore(){

}



NYPizzaStore::~NYPizzaStore(){

}





FactoryMethod::Pizza * NYPizzaStore::createPizza(std::string type){
  if(type == "cheese")
    return new NYCheesePizza();
  else if(type == "veggie")
    return new NYVeggiePizza();
  return nullptr;
}