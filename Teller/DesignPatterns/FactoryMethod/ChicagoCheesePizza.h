///////////////////////////////////////////////////////////
//  ChicagoCheesePizza.h
//  Implementation of the Class ChicagoCheesePizza
//  Created on:      05-10ÔÂ-2015 14:49:15
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_EAC76E25_664B_49d6_BA8D_FCC00C02CC9A__INCLUDED_)
#define EA_EAC76E25_664B_49d6_BA8D_FCC00C02CC9A__INCLUDED_

#include "Pizza.h"

namespace FactoryMethod
{
	class ChicagoCheesePizza : public Pizza
	{

	public:
		ChicagoCheesePizza();
		virtual ~ChicagoCheesePizza();

		virtual void box() override;
		virtual void prepare() override;

	};

}
#endif // !defined(EA_EAC76E25_664B_49d6_BA8D_FCC00C02CC9A__INCLUDED_)
