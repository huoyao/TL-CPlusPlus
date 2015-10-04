///////////////////////////////////////////////////////////
//  Beverage.h
//  Implementation of the Class Beverage
//  Created on:      04-10ÔÂ-2015 20:19:38
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_E378AE8E_87F8_4760_9AE7_A2A02E371B92__INCLUDED_)
#define EA_E378AE8E_87F8_4760_9AE7_A2A02E371B92__INCLUDED_
#include <string>

namespace Decorator
{
	class Beverage
	{

	public:
    Beverage();
		virtual ~Beverage();

		virtual float cost() =0;
		virtual std::string getDescription();

	private:
	  std::string name;

	};

}
#endif // !defined(EA_E378AE8E_87F8_4760_9AE7_A2A02E371B92__INCLUDED_)
