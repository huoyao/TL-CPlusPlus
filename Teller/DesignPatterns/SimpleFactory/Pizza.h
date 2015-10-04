///////////////////////////////////////////////////////////
//  Pizza.h
//  Implementation of the Class Pizza
//  Created on:      04-10ÔÂ-2015 21:49:56
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_BD6CC9A9_D8D3_4cba_9E68_DBF9F02A4F2C__INCLUDED_)
#define EA_BD6CC9A9_D8D3_4cba_9E68_DBF9F02A4F2C__INCLUDED_

namespace SimpleFactory
{
	class Pizza
	{

	public:
		Pizza();
		virtual ~Pizza();

		virtual void bake() =0;
		virtual void box() =0;
		virtual void prepare() =0;

	};

}
#endif // !defined(EA_BD6CC9A9_D8D3_4cba_9E68_DBF9F02A4F2C__INCLUDED_)
