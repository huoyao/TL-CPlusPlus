/*************************************
/  FILE:QuackBehaviour.h
/  TIME:2015-10-01 21:59:36
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __QuackBehaviour_H__
#define __QuackBehaviour_H__


class QuackBehaviour
{
public:
  QuackBehaviour()
  {
  };

  virtual ~QuackBehaviour()
  {
  };
  virtual void Quack() = 0;
};

#endif

