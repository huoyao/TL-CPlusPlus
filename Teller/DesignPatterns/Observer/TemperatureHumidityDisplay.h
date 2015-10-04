///////////////////////////////////////////////////////////
//  TemperatureHumidityDisplay.h
//  Implementation of the Class TemperatureHumidityDisplay
//  Created on:      03-10ÔÂ-2015 16:47:21
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_95B4FA6D_55A8_4d89_9DBB_10AE8A68D9C0__INCLUDED_)
#define EA_95B4FA6D_55A8_4d89_9DBB_10AE8A68D9C0__INCLUDED_

#include "WeatherData.h"
#include "Observer.h"
#include "Displayment.h"


class TemperatureHumidityDisplay: public Observer, public Displayment
{
public:
  explicit TemperatureHumidityDisplay(Subject * changed_subject);
  virtual ~TemperatureHumidityDisplay();

  virtual void Display() override;
  virtual void Update(Subject * changed_subject) override;

private:
  WeatherData *m_WeatherData;
};


#endif // !defined(EA_95B4FA6D_55A8_4d89_9DBB_10AE8A68D9C0__INCLUDED_)
