///////////////////////////////////////////////////////////
//  VeggiePizza.h
//  Implementation of the Class VeggiePizza
//  Created on:      05-10ÔÂ-2015 19:49:57
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_E18B238E_62C6_4e8c_8506_402361EA4BEF__INCLUDED_)
#define EA_E18B238E_62C6_4e8c_8506_402361EA4BEF__INCLUDED_

#include "Pizza1.h"

namespace AbstractFactory
{
	class VeggiePizza : public Pizza
	{

	public:
		VeggiePizza();
	  explicit VeggiePizza(PizzaIngredientFactory *);
		virtual ~VeggiePizza();

		virtual void prepare() override;

	};

}
#endif // !defined(EA_E18B238E_62C6_4e8c_8506_402361EA4BEF__INCLUDED_)
