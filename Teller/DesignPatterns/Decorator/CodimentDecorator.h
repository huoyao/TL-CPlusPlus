///////////////////////////////////////////////////////////
//  CodimentDecorator.h
//  Implementation of the Class CodimentDecorator
//  Created on:      04-10ÔÂ-2015 20:19:38
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_15441FC9_F89E_408f_B9ED_51FC6B245500__INCLUDED_)
#define EA_15441FC9_F89E_408f_B9ED_51FC6B245500__INCLUDED_

#include "Beverage.h"

namespace Decorator
{
	class CodimentDecorator : public Beverage
	{

	public:
		virtual ~CodimentDecorator();
    CodimentDecorator();
		virtual std::string getDescription() =0;

	protected:
    
		Beverage * beverage_;

	};

}
#endif // !defined(EA_15441FC9_F89E_408f_B9ED_51FC6B245500__INCLUDED_)
