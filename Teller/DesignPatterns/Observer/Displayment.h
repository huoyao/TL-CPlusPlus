///////////////////////////////////////////////////////////
//  Displayment.h
//  Implementation of the Class Displayment
//  Created on:      03-10ÔÂ-2015 16:47:19
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_A240C0DE_2295_4ea9_80DF_A91DCB7AAC4A__INCLUDED_)
#define EA_A240C0DE_2295_4ea9_80DF_A91DCB7AAC4A__INCLUDED_


class Displayment
{
public:
  virtual ~Displayment();

  virtual void Display() = 0;
protected:
  Displayment();
};


#endif // !defined(EA_A240C0DE_2295_4ea9_80DF_A91DCB7AAC4A__INCLUDED_)
