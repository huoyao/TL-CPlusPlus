///////////////////////////////////////////////////////////
//  HouseBlend.h
//  Implementation of the Class HouseBlend
//  Created on:      04-10ÔÂ-2015 20:19:39
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_877D1F80_E164_498f_874B_30C6C8C879E5__INCLUDED_)
#define EA_877D1F80_E164_498f_874B_30C6C8C879E5__INCLUDED_

#include "Beverage.h"

namespace Decorator
{
	class HouseBlend : public Beverage
	{

	public:
		HouseBlend();
		virtual ~HouseBlend();

		virtual float cost() override;

	};

}
#endif // !defined(EA_877D1F80_E164_498f_874B_30C6C8C879E5__INCLUDED_)
