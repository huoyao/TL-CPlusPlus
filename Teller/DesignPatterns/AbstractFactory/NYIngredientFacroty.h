///////////////////////////////////////////////////////////
//  NYIngredientFacroty.h
//  Implementation of the Class NYIngredientFacroty
//  Created on:      05-10ÔÂ-2015 19:49:55
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_895279A9_684C_4173_872D_8F77174BFB3C__INCLUDED_)
#define EA_895279A9_684C_4173_872D_8F77174BFB3C__INCLUDED_

#include "PizzaIngredientFactory.h"

namespace AbstractFactory
{
	class NYIngredientFacroty : public PizzaIngredientFactory
	{

	public:
		NYIngredientFacroty();
		virtual ~NYIngredientFacroty();

		virtual Cheese * CreateCheese() override;
		virtual Sauce * CreateSuace() override;

	};

}
#endif // !defined(EA_895279A9_684C_4173_872D_8F77174BFB3C__INCLUDED_)
