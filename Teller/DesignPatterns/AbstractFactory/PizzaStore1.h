///////////////////////////////////////////////////////////
//  PizzaStore.h
//  Implementation of the Class PizzaStore
//  Created on:      05-10ÔÂ-2015 19:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_2CD20173_7B27_46df_9488_56FB6F79D7A0__INCLUDED_)
#define EA_2CD20173_7B27_46df_9488_56FB6F79D7A0__INCLUDED_
#include <string>

namespace AbstractFactory
{
  class Pizza;

  class PizzaStore
	{

	public:
		PizzaStore();
		virtual ~PizzaStore();

		virtual Pizza * createPizza(std::string type) =0;
		void orderPizza(std::string type);

	};

}
#endif // !defined(EA_2CD20173_7B27_46df_9488_56FB6F79D7A0__INCLUDED_)
