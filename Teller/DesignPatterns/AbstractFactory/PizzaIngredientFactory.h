///////////////////////////////////////////////////////////
//  PizzaIngredientFactory.h
//  Implementation of the Class PizzaIngredientFactory
//  Created on:      05-10ÔÂ-2015 19:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_D93D36B2_AFA8_4b6f_AC85_C3091B98EC8F__INCLUDED_)
#define EA_D93D36B2_AFA8_4b6f_AC85_C3091B98EC8F__INCLUDED_

namespace AbstractFactory
{
  class Sauce;
  class Cheese;

  class PizzaIngredientFactory
	{

	public:
		PizzaIngredientFactory();
		virtual ~PizzaIngredientFactory();

		virtual Cheese * CreateCheese() =0;
		virtual Sauce * CreateSuace() =0;

	};

}
#endif // !defined(EA_D93D36B2_AFA8_4b6f_AC85_C3091B98EC8F__INCLUDED_)
