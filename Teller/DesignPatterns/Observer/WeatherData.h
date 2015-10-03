///////////////////////////////////////////////////////////
//  WeatherData.h
//  Implementation of the Class WeatherData
//  Created on:      03-10ÔÂ-2015 16:47:21
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_EF0E9A27_A800_42c4_8ED9_6CB3929B5CA9__INCLUDED_)
#define EA_EF0E9A27_A800_42c4_8ED9_6CB3929B5CA9__INCLUDED_

#include "Subject.h"

namespace Observer
{
	class WeatherData : public Observer::Subject
	{

	public:
		WeatherData();
		virtual ~WeatherData();

		virtual void Attach(Observer * observer);
		virtual void Dettach(Observer * observer);
		float GetHumidity();
		float GetPressure();
		float GetTemperatur();
		virtual void Notisfy();
		void SetStatus(float temperature_, float humidity_, float pressure_);

	private:
		float humidity_;
		List<Observer *> observers_;
		float pressure_;
		float temperature_;

	};

}
#endif // !defined(EA_EF0E9A27_A800_42c4_8ED9_6CB3929B5CA9__INCLUDED_)
