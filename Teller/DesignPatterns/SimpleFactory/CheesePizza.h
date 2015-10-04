///////////////////////////////////////////////////////////
//  CheesePizza.h
//  Implementation of the Class CheesePizza
//  Created on:      04-10��-2015 21:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_BFB69B94_FC69_47fc_B101_05C8D8651F40__INCLUDED_)
#define EA_BFB69B94_FC69_47fc_B101_05C8D8651F40__INCLUDED_

#include "Pizza.h"

namespace SimpleFactory
{
	class CheesePizza : public SimpleFactory::Pizza
	{

	public:
		CheesePizza();
		virtual ~CheesePizza();

		virtual void bake();
		virtual void box();
		virtual void prepare();

	};

}
#endif // !defined(EA_BFB69B94_FC69_47fc_B101_05C8D8651F40__INCLUDED_)