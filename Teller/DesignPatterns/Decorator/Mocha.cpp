///////////////////////////////////////////////////////////
//  Mocha.cpp
//  Implementation of the Class Mocha
//  Created on:      04-10ÔÂ-2015 20:19:39
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Mocha.h"

using Decorator::Mocha;


Mocha::Mocha(){

}

Mocha::Mocha(Beverage* beverage)
{
  beverage_ = beverage;
}


Mocha::~Mocha(){

}

float Mocha::cost(){

	return 0.1+beverage_->cost();
}

std::string Mocha::getDescription(){

	return  beverage_->getDescription()+",mocha";
}