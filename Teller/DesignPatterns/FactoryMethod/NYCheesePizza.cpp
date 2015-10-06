///////////////////////////////////////////////////////////
//  NYCheesePizza.cpp
//  Implementation of the Class NYCheesePizza
//  Created on:      05-10ÔÂ-2015 14:49:16
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "NYCheesePizza.h"
#include <iostream>

using FactoryMethod::NYCheesePizza;


NYCheesePizza::NYCheesePizza(){
  name = "NYCheesePizza";
}



NYCheesePizza::~NYCheesePizza(){

}





void NYCheesePizza::box(){
  std::cout <<  "boxing\n";
}


void NYCheesePizza::prepare(){
  std::cout <<  "preparing "<<name<< std::endl;
}