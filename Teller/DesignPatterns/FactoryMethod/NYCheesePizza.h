///////////////////////////////////////////////////////////
//  NYCheesePizza.h
//  Implementation of the Class NYCheesePizza
//  Created on:      05-10ÔÂ-2015 14:49:16
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_9E785AD1_1BF9_41c7_8578_C78463D08ADA__INCLUDED_)
#define EA_9E785AD1_1BF9_41c7_8578_C78463D08ADA__INCLUDED_

#include "Pizza.h"

namespace FactoryMethod
{
	class NYCheesePizza : public FactoryMethod::Pizza
	{

	public:
		NYCheesePizza();
		virtual ~NYCheesePizza();

		virtual void box();
		virtual void prepare();

	};

}
#endif // !defined(EA_9E785AD1_1BF9_41c7_8578_C78463D08ADA__INCLUDED_)
