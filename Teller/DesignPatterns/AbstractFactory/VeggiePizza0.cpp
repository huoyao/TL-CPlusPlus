///////////////////////////////////////////////////////////
//  VeggiePizza.cpp
//  Implementation of the Class VeggiePizza
//  Created on:      05-10ÔÂ-2015 19:49:57
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "VeggiePizza0.h"

using AbstractFactory::VeggiePizza;
using AbstractFactory::PizzaIngredientFactory;


VeggiePizza::VeggiePizza(){

}

VeggiePizza::VeggiePizza(PizzaIngredientFactory* ingredient_factory) {
  ingedient_factory_ = ingredient_factory;
}


VeggiePizza::~VeggiePizza(){

}





void VeggiePizza::prepare(){
  cheese = ingedient_factory_->CreateCheese();
  suace = ingedient_factory_->CreateSuace();
}