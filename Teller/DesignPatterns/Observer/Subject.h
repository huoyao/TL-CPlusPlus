///////////////////////////////////////////////////////////
//  Subject.h
//  Implementation of the Class Subject
//  Created on:      03-10ÔÂ-2015 16:47:20
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_07149145_C490_4298_B001_4E2A934C7D8E__INCLUDED_)
#define EA_07149145_C490_4298_B001_4E2A934C7D8E__INCLUDED_

#include "Observer.h"
#include "Displayment.h"

namespace Observer
{
	class Subject
	{

	public:
		Subject();
		virtual ~Subject();
		Observer::Observer *m_Observer;
		Observer::Displayment *m_Displayment;

		virtual void Attach(Observer * observer);
		virtual void Dettach(Observer * observer);
		virtual void Notisfy();

	};

}
#endif // !defined(EA_07149145_C490_4298_B001_4E2A934C7D8E__INCLUDED_)
