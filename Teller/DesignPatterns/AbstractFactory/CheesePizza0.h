///////////////////////////////////////////////////////////
//  CheesePizza.h
//  Implementation of the Class CheesePizza
//  Created on:      05-10ÔÂ-2015 19:49:53
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_AD1F1280_5021_4005_8FF8_85114B7E46F8__INCLUDED_)
#define EA_AD1F1280_5021_4005_8FF8_85114B7E46F8__INCLUDED_

#include "Pizza1.h"

namespace AbstractFactory
{
	class CheesePizza : public Pizza
	{

	public:
		CheesePizza();
	  explicit CheesePizza(PizzaIngredientFactory *);
		virtual ~CheesePizza();

		virtual void prepare() override;

	};

}
#endif // !defined(EA_AD1F1280_5021_4005_8FF8_85114B7E46F8__INCLUDED_)
