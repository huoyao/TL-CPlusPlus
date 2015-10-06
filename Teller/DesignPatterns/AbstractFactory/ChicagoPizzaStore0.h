///////////////////////////////////////////////////////////
//  ChicagoPizzaStore.h
//  Implementation of the Class ChicagoPizzaStore
//  Created on:      05-10ÔÂ-2015 19:49:54
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_FA8866BB_AB3F_4a1e_A6BD_0FC0901008FE__INCLUDED_)
#define EA_FA8866BB_AB3F_4a1e_A6BD_0FC0901008FE__INCLUDED_

#include "PizzaStore1.h"
#include <string>

namespace AbstractFactory
{
  class Pizza;

  class ChicagoPizzaStore : public PizzaStore
	{

	public:
		ChicagoPizzaStore();
		virtual ~ChicagoPizzaStore();

		virtual Pizza * createPizza(std::string type) override;

	};

}
#endif // !defined(EA_FA8866BB_AB3F_4a1e_A6BD_0FC0901008FE__INCLUDED_)
