///////////////////////////////////////////////////////////
//  Subject.cpp
//  Implementation of the Class Subject
//  Created on:      03-10ÔÂ-2015 16:47:20
//  Original author: huoyao
///////////////////////////////////////////////////////////

#include "Subject.h"

Subject::Subject(){

}

Subject::~Subject(){

}

void Subject::Attach(Observer * observer){
  observers_.push_back(observer);
}

void Subject::Dettach(Observer * observer){
  auto it_tobedelete=observers_.end();
  for(auto it = observers_.begin();it != observers_.end();++it){
    if (*it==observer)
    {
      it_tobedelete = it;
      break;
    }
  }
  if (it_tobedelete!=observers_.end())
  {
    observers_.erase(it_tobedelete);
  }
}


void Subject::Notisfy(){
  for (auto& it : observers_)
  {
    it->Update(this);
  }
}