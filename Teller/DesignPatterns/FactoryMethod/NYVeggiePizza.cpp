///////////////////////////////////////////////////////////
//  NYVeggiePizza.cpp
//  Implementation of the Class NYVeggiePizza
//  Created on:      05-10ÔÂ-2015 14:49:17
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "NYVeggiePizza.h"
#include <iostream>

using FactoryMethod::NYVeggiePizza;


NYVeggiePizza::NYVeggiePizza(){
  name = "NYVeggiePizza";
}



NYVeggiePizza::~NYVeggiePizza(){

}





void NYVeggiePizza::box(){
  std::cout <<  "boxing\n";
}


void NYVeggiePizza::prepare(){
  std::cout << "preparing " << name << std::endl;
}