///////////////////////////////////////////////////////////
//  ChicagoVeggiePizza.h
//  Implementation of the Class ChicagoVeggiePizza
//  Created on:      05-10ÔÂ-2015 14:49:15
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_97BCA323_7521_475f_AC9A_4DF77F3626DD__INCLUDED_)
#define EA_97BCA323_7521_475f_AC9A_4DF77F3626DD__INCLUDED_

#include "Pizza.h"

namespace FactoryMethod
{
	class ChicagoVeggiePizza : public Pizza
	{

	public:
		ChicagoVeggiePizza();
		virtual ~ChicagoVeggiePizza();

		virtual void box() override;
		virtual void prepare() override;

	};

}
#endif // !defined(EA_97BCA323_7521_475f_AC9A_4DF77F3626DD__INCLUDED_)
