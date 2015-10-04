///////////////////////////////////////////////////////////
//  DarkRoast.h
//  Implementation of the Class DarkRoast
//  Created on:      04-10ÔÂ-2015 20:19:38
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_CEE9D074_1662_4b88_AB25_54C9BC60778F__INCLUDED_)
#define EA_CEE9D074_1662_4b88_AB25_54C9BC60778F__INCLUDED_

#include "Beverage.h"

namespace Decorator
{
	class DarkRoast : public Beverage
	{

	public:
		DarkRoast();
		virtual ~DarkRoast();

		virtual float cost() override;

	};

}
#endif // !defined(EA_CEE9D074_1662_4b88_AB25_54C9BC60778F__INCLUDED_)
