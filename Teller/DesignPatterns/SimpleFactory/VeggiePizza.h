///////////////////////////////////////////////////////////
//  VeggiePizza.h
//  Implementation of the Class VeggiePizza
//  Created on:      04-10ÔÂ-2015 21:49:57
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_192E884A_29E7_4384_9610_83008638BD18__INCLUDED_)
#define EA_192E884A_29E7_4384_9610_83008638BD18__INCLUDED_

#include "Pizza.h"

namespace SimpleFactory
{
	class VeggiePizza : public SimpleFactory::Pizza
	{

	public:
		VeggiePizza();
		virtual ~VeggiePizza();

		virtual void bake();
		virtual void box();
		virtual void prepare();

	};

}
#endif // !defined(EA_192E884A_29E7_4384_9610_83008638BD18__INCLUDED_)
