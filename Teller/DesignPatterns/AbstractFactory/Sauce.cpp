///////////////////////////////////////////////////////////
//  Sauce.cpp
//  Implementation of the Class Sauce
//  Created on:      05-10ÔÂ-2015 19:49:57
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Sauce.h"

using AbstractFactory::Sauce;


Sauce::Sauce(){

}



Sauce::~Sauce(){

}





std::string Sauce::getName(){

	return  name;
}

void Sauce::setName(const std::string& str_name) {
  name = str_name;
}
