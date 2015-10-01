#ifndef __TEMPLATE_H__
#define __TEMPLATE_H__
#include <algorithm>

//class template
template<typename T>
class TemplateClass
{
public:
  TemplateClass();
  TemplateClass(const T &d):data(d){};
  ~TemplateClass();
  void setData(const T &);
  T getData();
private:
  T data;
};

template<typename T>
TemplateClass<T>::TemplateClass()
{

}

template<typename T>
TemplateClass<T>::~TemplateClass()
{

}

//function template
template<typename T>
T addElem(const T &t1, const T&t2)
{
  return t1 + t2;
}

// clamp some variables in a range
template<typename T>
void clamp(const T& r1, const T& r2, T& t)
{
  t = max(t, r1);
  t = min(t, r2);
}

 template<typename T, typename... args>
 void clamp(const T &r1, const T&r2, T &t, args &...arg)
 {
   clamp(r1, r2, t);
   clamp(r1,r2,arg...);
 }


#endif

/**********************************************************************************/
/*    three method for template implementation                                    */
/*  first:declaration and definition in the same file (recommended)               */
/* second:explicit declaration in another file                                    */
/*  third:using "export" before template class in another file(maybe unsupported) */
/**********************************************************************************/
