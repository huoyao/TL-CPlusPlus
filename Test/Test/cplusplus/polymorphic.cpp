#include <iostream>
#include <iomanip>  //for cout format
using namespace std;

class base
{
public:
  base(){};
  base(const int &d1,const int &d2):data(d1), pbdata(d2){}
  base(const int &d):data(d),pbdata(d){}
  virtual ~base(){};
  virtual int getDeriveclassData() = 0;
  virtual int getData(){ return 0; };   //not pure virtual function, must be implemented
  int pbdata;  //public element
protected:
  int data;
};

class derive:public base
{
public:
  derive(){};
  derive(const int &d1,const int &d2):dt(d1){};
  derive(const int &d):base(d), dt(d){}
  ~derive(){};
  virtual int getDeriveclassData();
  virtual int getData();
protected:
  int dt;
};

int derive::getDeriveclassData()
{
  return dt;
}

int derive::getData()
{
  return dt+1;
}

int main()
{       
  //base bb; //error: abstract class, can not be used to initialize a instance
  base *b = NULL,*bb=NULL;  //abstract class, class pointer declare allowed
  {
    derive *d = new derive(12), *dd = new derive(1, 2);
    b = d;
    bb = dd;
  }
  cout << "pure virtual function in base class:" << b->getDeriveclassData() << endl;
  cout << "virtual function in base class:" << b->getData() << endl;
  cout << "public data in base class:" << b->pbdata << endl;  //must be public element
  cout << "Default initialization,public data in base class:" << bb->pbdata << endl;  //must be public element
  system("pause");
  return 0;
}