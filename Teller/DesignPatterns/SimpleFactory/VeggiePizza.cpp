///////////////////////////////////////////////////////////
//  VeggiePizza.cpp
//  Implementation of the Class VeggiePizza
//  Created on:      04-10ÔÂ-2015 21:49:57
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "VeggiePizza.h"
#include <iostream>

using SimpleFactory::VeggiePizza;


VeggiePizza::VeggiePizza(){

}



VeggiePizza::~VeggiePizza(){

}





void VeggiePizza::bake(){
  std::cout <<  "veggie pizza baking\n";
}


void VeggiePizza::box(){
  std::cout << "veggie pizza boxing\n";
}


void VeggiePizza::prepare(){
  std::cout << "veggie pizza preparing\n";
}