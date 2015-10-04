///////////////////////////////////////////////////////////
//  PressureDisplay.h
//  Implementation of the Class PressureDisplay
//  Created on:      03-10ÔÂ-2015 16:47:20
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_17BDA476_FF1C_4c97_B315_DF044EFA9BB5__INCLUDED_)
#define EA_17BDA476_FF1C_4c97_B315_DF044EFA9BB5__INCLUDED_

#include "WeatherData.h"
#include "Observer.h"
#include "Displayment.h"


class PressureDisplay: public Observer, public Displayment
{

public:
  explicit PressureDisplay(Subject * changed_subject);
  virtual ~PressureDisplay();

  virtual void Display() override;
  virtual void Update(Subject * changed_subject) override;

private:
  WeatherData *m_WeatherData;

};


#endif // !defined(EA_17BDA476_FF1C_4c97_B315_DF044EFA9BB5__INCLUDED_)
