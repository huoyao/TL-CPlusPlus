///////////////////////////////////////////////////////////
//  Pizza.h
//  Implementation of the Class Pizza
//  Created on:      05-10ÔÂ-2015 19:49:55
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_77FE7CDC_F645_4925_AB8F_F19AF894F2AE__INCLUDED_)
#define EA_77FE7CDC_F645_4925_AB8F_F19AF894F2AE__INCLUDED_

#include "PizzaIngredientFactory.h"
#include "Sauce.h"
#include "Cheese.h"

namespace AbstractFactory
{
	class Pizza
	{

	public:
		Pizza();
		virtual ~Pizza();
		//AbstractFactory::PizzaIngredientFactory *m_PizzaIngredientFactory;

		void content();
		std::string getName();
	  virtual void prepare()=0;
		void setName(const std::string &);
  protected:
    Cheese * cheese;
    Sauce * suace;
    PizzaIngredientFactory *ingedient_factory_;
	private:
		std::string name;

	};

}
#endif // !defined(EA_77FE7CDC_F645_4925_AB8F_F19AF894F2AE__INCLUDED_)
