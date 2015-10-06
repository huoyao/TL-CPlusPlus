///////////////////////////////////////////////////////////
//  ChicagoIngredientFactory.h
//  Implementation of the Class ChicagoIngredientFactory
//  Created on:      05-10ÔÂ-2015 19:49:53
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_592140AF_66DC_49d6_BACF_E25B0EDEA57A__INCLUDED_)
#define EA_592140AF_66DC_49d6_BACF_E25B0EDEA57A__INCLUDED_

#include "PizzaIngredientFactory.h"

namespace AbstractFactory
{

  class ChicagoIngredientFactory : public PizzaIngredientFactory
	{

	public:
		ChicagoIngredientFactory();
		virtual ~ChicagoIngredientFactory();

		virtual Cheese * CreateCheese() override;
		virtual Sauce * CreateSuace() override;

	};

}
#endif // !defined(EA_592140AF_66DC_49d6_BACF_E25B0EDEA57A__INCLUDED_)
