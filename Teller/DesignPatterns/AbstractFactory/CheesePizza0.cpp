///////////////////////////////////////////////////////////
//  CheesePizza.cpp
//  Implementation of the Class CheesePizza
//  Created on:      05-10ÔÂ-2015 19:49:53
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "CheesePizza0.h"
#include "PizzaIngredientFactory.h"

using AbstractFactory::CheesePizza;
using AbstractFactory::PizzaIngredientFactory;


CheesePizza::CheesePizza(){

}

CheesePizza::CheesePizza(PizzaIngredientFactory* pizza_ingredient) {
  ingedient_factory_ = pizza_ingredient;
}


CheesePizza::~CheesePizza(){

}





void CheesePizza::prepare(){
  cheese = ingedient_factory_->CreateCheese();
  suace = ingedient_factory_->CreateSuace();
}