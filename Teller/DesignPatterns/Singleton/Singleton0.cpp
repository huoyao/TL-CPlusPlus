///////////////////////////////////////////////////////////
//  Singleton0.cpp
//  Implementation of the Class Singleton0
//  Created on:      06-10ÔÂ-2015 13:10:32
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Singleton0.h"

using Singleton::Singleton0;


Singleton0::Singleton0():val(0){

}



Singleton0::~Singleton0(){

}

Singleton0::Singleton0(const Singleton0& singleton1) {
  
}

Singleton0& Singleton0::operator=(const Singleton0& singleton1) {
  return *this;
}

Singleton0 * Singleton0::instance=new Singleton0();





Singleton0 * Singleton0::getInstance(){

	return  instance;
}


int Singleton0::getValue(){

	return val;
}


void Singleton0::setValue(const int&v){

  val = v;
}