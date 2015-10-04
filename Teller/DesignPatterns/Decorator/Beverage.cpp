///////////////////////////////////////////////////////////
//  Beverage.cpp
//  Implementation of the Class Beverage
//  Created on:      04-10ÔÂ-2015 20:19:38
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Beverage.h"

using Decorator::Beverage;


Beverage::Beverage(){

}



Beverage::~Beverage(){

}


std::string Beverage::getDescription(){

	return  name;
}