#include <iostream>
using namespace std;
typedef int MATF;

template<typename T>
class TFBase;

class Base
{
public:
  Base(){};
  Base(const int &d):data(d),pbdata(d),prodata(d){};
  ~Base(){};
  int pbdata;
  friend class FBase;
  friend class TFBase<MATF>;
private:
  int data;
protected:
  int prodata;
};

template<typename T>
class TBase
{
public:
  TBase(){};
  TBase(const T &d):data(d){};
  ~TBase(){};
  friend class TFBase<T>;
protected:
private:
  T data;
};

template<typename T>
class TFBase
{
public:
  TFBase(){};
  TFBase(const T &d):data(d){};
  ~TFBase(){};
  void getData(const class TBase<T> &tb)
  {
    cout << "TBase class's private element:" << tb.data << endl;
  }
  void getData(const class Base &b)
  {
    cout << "Base class's private element:" << b.data << endl;
  }
protected:
private:
  T data;
};

class FBase
{
public:
  FBase(){};
  ~FBase(){};
  void getBaseData(const Base &b)
  {
    cout << "Base class's private element:" << b.data << endl;
  }
private:
  int data;
};

class dbase
{
public:
  dbase(){};
  ~dbase(){};
  void getBaseData(const Base &b)
  {
    cout << "only access for Base class's public element:" << b.pbdata << endl;
    //cout << "Base class's protected elem:" << b.prodata << endl;  //can not access for protected and private elements
  }
private:
  int data;
};

int main()
{
  FBase fb;
  Base b(12);
  TBase<int> tb(11);
  TFBase<int> tfb(13);
  fb.getBaseData(b);
  tfb.getData(tb);
  tfb.getData(b);
  system("pause");
  return 0;
}