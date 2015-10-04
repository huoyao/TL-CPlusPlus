///////////////////////////////////////////////////////////
//  Milk.cpp
//  Implementation of the Class Milk
//  Created on:      04-10ÔÂ-2015 20:19:39
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Milk.h"

using Decorator::Milk;


Milk::Milk(){

}

Milk::Milk(Beverage* beverage)
{
  beverage_ = beverage;
}


Milk::~Milk(){

}

float Milk::cost(){

	return 0.2+beverage_->cost();
}


std::string Milk::getDescription(){

	return  beverage_->getDescription()+",milk";
}