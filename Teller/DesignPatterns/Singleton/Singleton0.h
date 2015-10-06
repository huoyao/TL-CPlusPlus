///////////////////////////////////////////////////////////
//  Singleton0.h
//  Implementation of the Class Singleton0
//  Created on:      06-10ÔÂ-2015 13:10:31
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_E894994F_41CD_4d47_B07B_66CC66FDE27F__INCLUDED_)
#define EA_E894994F_41CD_4d47_B07B_66CC66FDE27F__INCLUDED_

namespace Singleton
{
	class Singleton0
	{

	public:
		static Singleton0 * getInstance();
		int getValue();
		void setValue(const int&);
    virtual ~Singleton0();
  protected:
    Singleton0();
    Singleton0(const Singleton0& singleton1);
    Singleton0 & operator=(const Singleton0& singleton1);
	private:
		static Singleton0 * instance;
		int val;

	};

}
#endif // !defined(EA_E894994F_41CD_4d47_B07B_66CC66FDE27F__INCLUDED_)
