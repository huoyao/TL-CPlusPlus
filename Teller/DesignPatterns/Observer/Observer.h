///////////////////////////////////////////////////////////
//  Observer.h
//  Implementation of the Class Observer
//  Created on:      03-10ÔÂ-2015 16:47:20
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_C4F8869A_6F5C_4011_B790_58770C6A2CB3__INCLUDED_)
#define EA_C4F8869A_6F5C_4011_B790_58770C6A2CB3__INCLUDED_

namespace Observer
{
	class Observer
	{

	public:
		Observer();
		virtual ~Observer();

		virtual void Update(Subject * changed_subject) =0;

	};

}
#endif // !defined(EA_C4F8869A_6F5C_4011_B790_58770C6A2CB3__INCLUDED_)
