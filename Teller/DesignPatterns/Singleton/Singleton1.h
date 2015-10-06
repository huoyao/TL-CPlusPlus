///////////////////////////////////////////////////////////
//  Singleton1.h
//  Implementation of the Class Singleton1
//  Created on:      06-10ÔÂ-2015 13:10:32
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_EDEDABA1_31FD_495c_BC81_AE9FFDD0B819__INCLUDED_)
#define EA_EDEDABA1_31FD_495c_BC81_AE9FFDD0B819__INCLUDED_

namespace Singleton
{
	class Singleton1
	{

	public:
		static Singleton1 * getInstance();
		int getValue();
		void setValue(const int&);
    virtual ~Singleton1();
  protected:
    Singleton1();
    Singleton1(const Singleton1& singleton1);
    Singleton1 & operator=(const Singleton1& singleton1);
	private:
    static Singleton1 * instance;
		int val;
	};

}
#endif // !defined(EA_EDEDABA1_31FD_495c_BC81_AE9FFDD0B819__INCLUDED_)
