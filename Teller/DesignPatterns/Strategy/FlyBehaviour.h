/*************************************
/  FILE:FlyBehaviour.h
/  TIME:2015-10-01 21:56:46
/AUTHOR:TL
/  INFO:
/*************************************/

#ifndef __FlyBehaviour_H__
#define __FlyBehaviour_H__


class FlyBehaviour
{
public:
  FlyBehaviour()
  {
  };

  virtual ~FlyBehaviour()
  {
  };
  virtual void Fly() = 0;
};

#endif

