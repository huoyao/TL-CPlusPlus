///////////////////////////////////////////////////////////
//  PizzaStore.h
//  Implementation of the Class PizzaStore
//  Created on:      05-10ÔÂ-2015 14:49:17
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_FC96687E_DF16_449c_A38E_443353BE54F2__INCLUDED_)
#define EA_FC96687E_DF16_449c_A38E_443353BE54F2__INCLUDED_
#include <string>
#include "Pizza.h"

namespace FactoryMethod
{
	class PizzaStore
	{

	public:
		PizzaStore();
		virtual ~PizzaStore();

		void orderPizza(std::string type);

	protected:
		virtual Pizza * createPizza(std::string type) =0;

	};

}
#endif // !defined(EA_FC96687E_DF16_449c_A38E_443353BE54F2__INCLUDED_)
