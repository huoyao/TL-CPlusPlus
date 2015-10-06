///////////////////////////////////////////////////////////
//  NYVeggiePizza.h
//  Implementation of the Class NYVeggiePizza
//  Created on:      05-10ÔÂ-2015 14:49:17
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_AEF73AE7_FA0E_41a7_A05E_49B5D380ECF5__INCLUDED_)
#define EA_AEF73AE7_FA0E_41a7_A05E_49B5D380ECF5__INCLUDED_

#include "Pizza.h"

namespace FactoryMethod
{
	class NYVeggiePizza : public FactoryMethod::Pizza
	{

	public:
		NYVeggiePizza();
		virtual ~NYVeggiePizza();

		virtual void box();
		virtual void prepare();

	};

}
#endif // !defined(EA_AEF73AE7_FA0E_41a7_A05E_49B5D380ECF5__INCLUDED_)
