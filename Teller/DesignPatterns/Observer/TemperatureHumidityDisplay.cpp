///////////////////////////////////////////////////////////
//  TemperatureHumidityDisplay.cpp
//  Implementation of the Class TemperatureHumidityDisplay
//  Created on:      03-10ÔÂ-2015 16:47:21
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "TemperatureHumidityDisplay.h"
#include <iostream>

TemperatureHumidityDisplay::TemperatureHumidityDisplay(Subject * changed_subject){
  m_WeatherData = dynamic_cast<WeatherData *> (changed_subject);
  m_WeatherData->Attach(this);
}



TemperatureHumidityDisplay::~TemperatureHumidityDisplay(){
  m_WeatherData->Dettach(this);
}

void TemperatureHumidityDisplay::Display(){
  float tmp = m_WeatherData->GetTemperatur();
  float humidity = m_WeatherData->GetHumidity();
  std::cout << "temperature:" << tmp << " humidity:" << humidity << std::endl;
}


void TemperatureHumidityDisplay::Update(Subject * changed_subject){
  m_WeatherData = dynamic_cast<WeatherData *> (changed_subject);
  Display();
}