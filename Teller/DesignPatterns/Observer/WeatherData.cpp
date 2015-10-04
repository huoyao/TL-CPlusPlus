///////////////////////////////////////////////////////////
//  WeatherData.cpp
//  Implementation of the Class WeatherData
//  Created on:      03-10ÔÂ-2015 16:47:21
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "WeatherData.h"

WeatherData::WeatherData(){

}

WeatherData::~WeatherData(){

}

float WeatherData::GetHumidity(){
	return humidity_;
}


float WeatherData::GetPressure(){
	return pressure_;
}


float WeatherData::GetTemperatur(){
	return temperature_;
}

void WeatherData::SetStatus(float temperature, float humidity, float pressure){
  temperature_ = temperature;
  humidity_ = humidity;
  pressure_ = pressure;
  Notisfy();
}