///////////////////////////////////////////////////////////
//  Cheese.cpp
//  Implementation of the Class Cheese
//  Created on:      05-10ÔÂ-2015 19:49:53
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Cheese.h"

using AbstractFactory::Cheese;


Cheese::Cheese(){

}



Cheese::~Cheese(){

}





std::string Cheese::getName(){

	return  name;
}


void Cheese::setName(const std::string & str_name){
  name = str_name;
}