///////////////////////////////////////////////////////////
//  Subject.h
//  Implementation of the Class Subject
//  Created on:      03-10ÔÂ-2015 16:47:20
//  Original author: huoyao
///////////////////////////////////////////////////////////

#if !defined(EA_07149145_C490_4298_B001_4E2A934C7D8E__INCLUDED_)
#define EA_07149145_C490_4298_B001_4E2A934C7D8E__INCLUDED_

#include "Observer.h"
#include <list>

class Subject
{
public:
  virtual ~Subject();

  virtual void Attach(Observer * observer);
  virtual void Dettach(Observer * observer);
  virtual void Notisfy();
protected:
  Subject();
private:
  std::list<Observer *> observers_;
};


#endif // !defined(EA_07149145_C490_4298_B001_4E2A934C7D8E__INCLUDED_)
