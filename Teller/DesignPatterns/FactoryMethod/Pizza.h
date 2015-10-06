///////////////////////////////////////////////////////////
//  Pizza.h
//  Implementation of the Class Pizza
//  Created on:      05-10ÔÂ-2015 14:49:17
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_CD827AE2_1AAA_40ba_A42E_46EB52C6C711__INCLUDED_)
#define EA_CD827AE2_1AAA_40ba_A42E_46EB52C6C711__INCLUDED_
#include <string>

namespace FactoryMethod
{
	class Pizza
	{

	public:
		Pizza();
		virtual ~Pizza();

		virtual void box() =0;
		virtual void prepare() =0;

	protected:
		std::string name;

	};

}
#endif // !defined(EA_CD827AE2_1AAA_40ba_A42E_46EB52C6C711__INCLUDED_)
