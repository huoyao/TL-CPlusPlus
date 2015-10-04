///////////////////////////////////////////////////////////
//  PressureDisplay.cpp
//  Implementation of the Class PressureDisplay
//  Created on:      03-10ÔÂ-2015 16:47:20
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "PressureDisplay.h"
#include <ostream>
#include <iostream>


PressureDisplay::PressureDisplay(Subject * changed_subject){
  m_WeatherData = dynamic_cast<WeatherData *> (changed_subject);
  m_WeatherData->Attach(this);
}



PressureDisplay::~PressureDisplay(){
  m_WeatherData->Dettach(this);
}

void PressureDisplay::Display(){
  float press = m_WeatherData->GetPressure();
  std::cout << "Pressure:" << press << std::endl;
}


void PressureDisplay::Update(Subject * changed_subject){
  m_WeatherData = dynamic_cast<WeatherData *> (changed_subject);
  Display();
}