///////////////////////////////////////////////////////////
//  Singleton1.cpp
//  Implementation of the Class Singleton1
//  Created on:      06-10ÔÂ-2015 13:10:32
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Singleton1.h"

using Singleton::Singleton1;


Singleton1::Singleton1():val(0){

}

Singleton1 * Singleton1::instance = nullptr;

Singleton1::~Singleton1(){

}

Singleton1::Singleton1(const Singleton1& singleton1) {
  
}

Singleton1& Singleton1::operator=(const Singleton1& singleton1) {
  return *this;
}

Singleton1 * Singleton1::getInstance(){
  if(instance == nullptr)
    instance = new Singleton1();
  return instance;
}


int Singleton1::getValue(){

	return val;
}


void Singleton1::setValue(const int& v){

	val=v;
}