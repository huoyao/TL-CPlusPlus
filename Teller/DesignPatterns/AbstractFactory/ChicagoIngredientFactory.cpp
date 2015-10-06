///////////////////////////////////////////////////////////
//  ChicagoIngredientFactory.cpp
//  Implementation of the Class ChicagoIngredientFactory
//  Created on:      05-10ÔÂ-2015 19:49:53
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "ChicagoIngredientFactory.h"
#include "ChicagoCheese.h"
#include "ChicagoSuace.h"

using AbstractFactory::ChicagoIngredientFactory;


ChicagoIngredientFactory::ChicagoIngredientFactory(){

}



ChicagoIngredientFactory::~ChicagoIngredientFactory(){

}


AbstractFactory::Cheese * ChicagoIngredientFactory::CreateCheese(){

	return  new ChicagoCheese();
}


AbstractFactory::Sauce * ChicagoIngredientFactory::CreateSuace(){

	return  new ChicagoSuace();
}