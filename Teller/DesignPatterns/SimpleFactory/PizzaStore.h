///////////////////////////////////////////////////////////
//  PizzaStore.h
//  Implementation of the Class PizzaStore
//  Created on:      04-10ÔÂ-2015 21:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_58FD61FE_ADBB_4e52_9ADB_177E5E4D6534__INCLUDED_)
#define EA_58FD61FE_ADBB_4e52_9ADB_177E5E4D6534__INCLUDED_

#include "SimpleFactoryStore.h"

namespace SimpleFactory
{
	class PizzaStore
	{

	public:
		PizzaStore();
		virtual ~PizzaStore();
		SimpleFactory::SimpleFactoryStore *m_SimpleFactoryStore;

		int orderPizza(int type);

	private:
		SimpleFactoryStore* simple_factory_;

	};

}
#endif // !defined(EA_58FD61FE_ADBB_4e52_9ADB_177E5E4D6534__INCLUDED_)
