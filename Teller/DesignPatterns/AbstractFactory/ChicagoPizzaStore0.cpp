///////////////////////////////////////////////////////////
//  ChicagoPizzaStore.cpp
//  Implementation of the Class ChicagoPizzaStore
//  Created on:      05-10ÔÂ-2015 19:49:54
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "ChicagoPizzaStore0.h"
#include "PizzaIngredientFactory.h"
#include "ChicagoIngredientFactory.h"
#include "CheesePizza0.h"
#include "VeggiePizza0.h"

using AbstractFactory::ChicagoPizzaStore;


ChicagoPizzaStore::ChicagoPizzaStore(){

}



ChicagoPizzaStore::~ChicagoPizzaStore(){

}

AbstractFactory::Pizza* ChicagoPizzaStore::createPizza(std::string type) {
  Pizza *pizza;
  PizzaIngredientFactory *chicago_ingredient_factory = new ChicagoIngredientFactory();
  if(type=="cheese") {
    pizza = new CheesePizza(chicago_ingredient_factory);
    pizza->setName("chicago cheese pizza");
  }else if(type=="veggie") {
    pizza = new VeggiePizza(chicago_ingredient_factory);
    pizza->setName("chicago veggie pizza");
  } else pizza = nullptr;
  return pizza;
}
