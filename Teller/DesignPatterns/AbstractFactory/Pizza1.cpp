///////////////////////////////////////////////////////////
//  Pizza.cpp
//  Implementation of the Class Pizza
//  Created on:      05-10ÔÂ-2015 19:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Pizza1.h"
#include <iostream>

using AbstractFactory::Pizza;


Pizza::Pizza(){

}



Pizza::~Pizza(){
  if(suace) delete suace;
  if(ingedient_factory_) delete ingedient_factory_;
  if(cheese) delete cheese;
}





void Pizza::content(){
  std::cout << "name:" << name << std::endl;
  std::cout <<  "content:\n";
  std::cout << "       " << cheese->getName() << std::endl;
  std::cout << "       " << suace->getName() << std::endl;

}


std::string Pizza::getName(){

	return  name;
}

void Pizza::prepare() {
  
}

void Pizza::setName(const std::string &str_name){
  name = str_name;
}