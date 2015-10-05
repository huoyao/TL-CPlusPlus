///////////////////////////////////////////////////////////
//  CheesePizza.cpp
//  Implementation of the Class CheesePizza
//  Created on:      04-10ÔÂ-2015 21:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "CheesePizza.h"
#include <iostream>

using SimpleFactory::CheesePizza;


CheesePizza::CheesePizza(){

}



CheesePizza::~CheesePizza(){

}

void CheesePizza::bake(){
  std::cout << "cheese pizza baking\n";
}


void CheesePizza::box(){
  std::cout <<  "cheese pizza boxing\n";
}


void CheesePizza::prepare(){
  std::cout <<  "cheese pizza preparing\n";
}