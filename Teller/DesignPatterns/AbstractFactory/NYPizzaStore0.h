///////////////////////////////////////////////////////////
//  NYPizzaStore.h
//  Implementation of the Class NYPizzaStore
//  Created on:      05-10ÔÂ-2015 19:49:55
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_F3321B06_E9B1_4962_8BAD_171044051123__INCLUDED_)
#define EA_F3321B06_E9B1_4962_8BAD_171044051123__INCLUDED_

#include "PizzaStore1.h"
#include <string>

namespace AbstractFactory
{
  class Pizza;

  class NYPizzaStore : public PizzaStore
	{

	public:
		NYPizzaStore();
		virtual ~NYPizzaStore();

		virtual Pizza * createPizza(std::string type) override;

	};

}
#endif // !defined(EA_F3321B06_E9B1_4962_8BAD_171044051123__INCLUDED_)
