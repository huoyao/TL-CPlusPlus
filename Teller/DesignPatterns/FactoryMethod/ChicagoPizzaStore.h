///////////////////////////////////////////////////////////
//  ChicagoPizzaStore.h
//  Implementation of the Class ChicagoPizzaStore
//  Created on:      05-10ÔÂ-2015 14:49:15
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_ACD74FE7_37F8_445b_86FD_388CB45BC5AA__INCLUDED_)
#define EA_ACD74FE7_37F8_445b_86FD_388CB45BC5AA__INCLUDED_

#include "PizzaStore.h"
#include "Pizza.h"
#include <string>

namespace FactoryMethod
{
	class ChicagoPizzaStore : public PizzaStore
	{

	public:
		ChicagoPizzaStore();
		virtual ~ChicagoPizzaStore();

	protected:
		virtual Pizza * createPizza(std::string type) override;

	};

}
#endif // !defined(EA_ACD74FE7_37F8_445b_86FD_388CB45BC5AA__INCLUDED_)
