///////////////////////////////////////////////////////////
//  SimpleFactoryStore.h
//  Implementation of the Class SimpleFactoryStore
//  Created on:      04-10ÔÂ-2015 21:49:57
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_040EDAC0_204F_4908_8241_37C7FD44029F__INCLUDED_)
#define EA_040EDAC0_204F_4908_8241_37C7FD44029F__INCLUDED_

#include "Pizza.h"

namespace SimpleFactory
{
	class SimpleFactoryStore
	{

	public:
		SimpleFactoryStore();
		virtual ~SimpleFactoryStore();

		Pizza * createPizza(int type);

	private:
		Pizza * pizza;

	};

}
#endif // !defined(EA_040EDAC0_204F_4908_8241_37C7FD44029F__INCLUDED_)
