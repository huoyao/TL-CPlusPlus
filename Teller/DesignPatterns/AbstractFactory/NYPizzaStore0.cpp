///////////////////////////////////////////////////////////
//  NYPizzaStore.cpp
//  Implementation of the Class NYPizzaStore
//  Created on:      05-10ÔÂ-2015 19:49:55
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "NYPizzaStore0.h"
#include "VeggiePizza0.h"
#include "CheesePizza0.h"
#include "NYIngredientFacroty.h"

using AbstractFactory::NYPizzaStore;


NYPizzaStore::NYPizzaStore(){

}



NYPizzaStore::~NYPizzaStore(){

}

AbstractFactory::Pizza* NYPizzaStore::createPizza(std::string type) {
  Pizza *pizza;
  PizzaIngredientFactory *chicago_ingredient_factory = new NYIngredientFacroty();
  if(type == "cheese") {
    pizza = new CheesePizza(chicago_ingredient_factory);
    pizza->setName("NY cheese pizza");
  } else if(type == "veggie") {
    pizza = new VeggiePizza(chicago_ingredient_factory);
    pizza->setName("NY veggie pizza");
  } else pizza = nullptr;
  return pizza;
}
