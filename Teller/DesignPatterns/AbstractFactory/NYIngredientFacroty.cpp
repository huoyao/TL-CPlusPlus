///////////////////////////////////////////////////////////
//  NYIngredientFacroty.cpp
//  Implementation of the Class NYIngredientFacroty
//  Created on:      05-10ÔÂ-2015 19:49:55
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "NYIngredientFacroty.h"
#include "NYCheese.h"
#include "NYSuace.h"

using AbstractFactory::NYIngredientFacroty;


NYIngredientFacroty::NYIngredientFacroty(){

}



NYIngredientFacroty::~NYIngredientFacroty(){

}

AbstractFactory::Cheese* NYIngredientFacroty::CreateCheese() {
  return new NYCheese();
}

AbstractFactory::Sauce* NYIngredientFacroty::CreateSuace() {
  return new NYSuace();
}