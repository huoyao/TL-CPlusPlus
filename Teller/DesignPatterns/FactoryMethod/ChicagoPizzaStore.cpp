///////////////////////////////////////////////////////////
//  ChicagoPizzaStore.cpp
//  Implementation of the Class ChicagoPizzaStore
//  Created on:      05-10ÔÂ-2015 14:49:15
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "ChicagoPizzaStore.h"
#include "ChicagoCheesePizza.h"
#include "ChicagoVeggiePizza.h"

using FactoryMethod::ChicagoPizzaStore;


ChicagoPizzaStore::ChicagoPizzaStore(){

}



ChicagoPizzaStore::~ChicagoPizzaStore(){

}





FactoryMethod::Pizza * ChicagoPizzaStore::createPizza(std::string type){
  if(type == "cheese")
    return new ChicagoCheesePizza();
  else if(type == "veggie")
    return new ChicagoVeggiePizza();
	return nullptr;
}