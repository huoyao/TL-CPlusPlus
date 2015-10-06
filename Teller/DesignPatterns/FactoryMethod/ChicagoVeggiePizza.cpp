///////////////////////////////////////////////////////////
//  ChicagoVeggiePizza.cpp
//  Implementation of the Class ChicagoVeggiePizza
//  Created on:      05-10ÔÂ-2015 14:49:16
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "ChicagoVeggiePizza.h"
#include <iostream>

using FactoryMethod::ChicagoVeggiePizza;


ChicagoVeggiePizza::ChicagoVeggiePizza(){
  name = "ChicagoVeggiePizza";
}



ChicagoVeggiePizza::~ChicagoVeggiePizza(){

}





void ChicagoVeggiePizza::box(){
  std::cout <<  "boxing\n";
}


void ChicagoVeggiePizza::prepare(){
  std::cout << "preparing " << name << std::endl;
}