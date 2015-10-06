///////////////////////////////////////////////////////////
//  NYPizzaStore.h
//  Implementation of the Class NYPizzaStore
//  Created on:      05-10ÔÂ-2015 14:49:16
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_9DB81FC0_4431_4fd0_8F5E_A3183502774F__INCLUDED_)
#define EA_9DB81FC0_4431_4fd0_8F5E_A3183502774F__INCLUDED_

#include "PizzaStore.h"

namespace FactoryMethod
{
	class NYPizzaStore : public FactoryMethod::PizzaStore
	{

	public:
		NYPizzaStore();
		virtual ~NYPizzaStore();

	protected:
		virtual Pizza * createPizza(std::string type);

	};

}
#endif // !defined(EA_9DB81FC0_4431_4fd0_8F5E_A3183502774F__INCLUDED_)
