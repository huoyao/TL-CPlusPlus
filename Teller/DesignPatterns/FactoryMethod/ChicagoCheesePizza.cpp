///////////////////////////////////////////////////////////
//  ChicagoCheesePizza.cpp
//  Implementation of the Class ChicagoCheesePizza
//  Created on:      05-10ÔÂ-2015 14:49:15
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "ChicagoCheesePizza.h"
#include <iostream>

using FactoryMethod::ChicagoCheesePizza;


ChicagoCheesePizza::ChicagoCheesePizza(){
  name = "ChicagoCheesePizza";
}



ChicagoCheesePizza::~ChicagoCheesePizza(){

}





void ChicagoCheesePizza::box(){
  std::cout <<  "boxing\n";
}


void ChicagoCheesePizza::prepare(){
  std::cout << "preparing " << name << std::endl;
}