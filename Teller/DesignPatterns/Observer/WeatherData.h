///////////////////////////////////////////////////////////
//  WeatherData.h
//  Implementation of the Class WeatherData
//  Created on:      03-10ÔÂ-2015 16:47:21
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_EF0E9A27_A800_42c4_8ED9_6CB3929B5CA9__INCLUDED_)
#define EA_EF0E9A27_A800_42c4_8ED9_6CB3929B5CA9__INCLUDED_

#include "Subject.h"


class WeatherData: public Subject
{
public:
  WeatherData();
  virtual ~WeatherData();

  float GetHumidity();
  float GetPressure();
  float GetTemperatur();
  void SetStatus(float temperature_, float humidity_, float pressure_);

private:
  float humidity_;
  float pressure_;
  float temperature_;
};


#endif // !defined(EA_EF0E9A27_A800_42c4_8ED9_6CB3929B5CA9__INCLUDED_)
