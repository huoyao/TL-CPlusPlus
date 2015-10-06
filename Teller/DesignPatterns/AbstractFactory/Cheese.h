///////////////////////////////////////////////////////////
//  Cheese.h
//  Implementation of the Class Cheese
//  Created on:      05-10ÔÂ-2015 19:49:52
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_C59BC334_AD73_4611_817C_37E24091EE72__INCLUDED_)
#define EA_C59BC334_AD73_4611_817C_37E24091EE72__INCLUDED_
#include <string>

namespace AbstractFactory
{
	class Cheese
	{

	public:
		Cheese();
		virtual ~Cheese();

		std::string getName();
		void setName(const std::string &);

	private:
		std::string name;

	};

}
#endif // !defined(EA_C59BC334_AD73_4611_817C_37E24091EE72__INCLUDED_)
