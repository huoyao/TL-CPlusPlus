///////////////////////////////////////////////////////////
//  Mocha.h
//  Implementation of the Class Mocha
//  Created on:      04-10ÔÂ-2015 20:19:39
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_068F17EE_3B46_48f1_B08D_F6189EFB334F__INCLUDED_)
#define EA_068F17EE_3B46_48f1_B08D_F6189EFB334F__INCLUDED_

#include "CodimentDecorator.h"

namespace Decorator
{
	class Mocha : public CodimentDecorator
	{

	public:
		Mocha();
	  explicit Mocha(Beverage * beverage);
		virtual ~Mocha();

		virtual float cost() override;
		virtual std::string getDescription() override;

	};

}
#endif // !defined(EA_068F17EE_3B46_48f1_B08D_F6189EFB334F__INCLUDED_)
