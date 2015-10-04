///////////////////////////////////////////////////////////
//  Milk.h
//  Implementation of the Class Milk
//  Created on:      04-10ÔÂ-2015 20:19:39
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_22611F66_7657_423f_B00B_E3B8DC34446B__INCLUDED_)
#define EA_22611F66_7657_423f_B00B_E3B8DC34446B__INCLUDED_

#include "CodimentDecorator.h"

namespace Decorator
{
	class Milk : public CodimentDecorator
	{

	public:
		Milk();
	  explicit Milk(Beverage*);
		virtual ~Milk();

		virtual float cost() override;
		virtual std::string getDescription() override;

	};

}
#endif // !defined(EA_22611F66_7657_423f_B00B_E3B8DC34446B__INCLUDED_)
