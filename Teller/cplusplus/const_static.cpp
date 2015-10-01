#if 0

#include <iostream>
using namespace std;

template<typename T>
class CConstStatic
{
public:
  CConstStatic();
  ~CConstStatic();

public:
  const T c_var0;
  static T s_var0;
  const static T cs_var0;

  const T c_var = 1;
  //error: 带有类内初始值设定项的静态数据成员必须具有不可变的常量整型
  //static T s_var = 2;
  const static T cs_var = 3;

  const T &cf_var = 0;
  //error: 带有类内初始值设定项的静态数据成员必须具有不可变的常量整型
  //static T &sf_var = 1;  
  //const static T &csf_var=1;
};

template<typename T>
T CConstStatic<T>::s_var0 = 0;

template<typename T>
CConstStatic<T>::CConstStatic():c_var0(0)
{
}

template<typename T>
CConstStatic<T>::~CConstStatic()
{
}

int main()
{
  CConstStatic<int> c_int;
  cout << "static var:" << c_int.s_var0;
  return 0;
}

#endif
