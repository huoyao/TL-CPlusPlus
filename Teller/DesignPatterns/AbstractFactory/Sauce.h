///////////////////////////////////////////////////////////
//  Sauce.h
//  Implementation of the Class Sauce
//  Created on:      05-10ÔÂ-2015 19:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_13F33C98_0281_4d1e_A29B_B0D36DB16D6F__INCLUDED_)
#define EA_13F33C98_0281_4d1e_A29B_B0D36DB16D6F__INCLUDED_
#include <string>

namespace AbstractFactory
{
	class Sauce
	{

	public:
		Sauce();
		virtual ~Sauce();

		std::string getName();
		void setName(const std::string &);

	private:
		std::string name;

	};

}
#endif // !defined(EA_13F33C98_0281_4d1e_A29B_B0D36DB16D6F__INCLUDED_)
