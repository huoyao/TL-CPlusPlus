#ifndef __TEMPLATE_H__
#define __TEMPLATE_H__
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

#endif

/**********************************************************************************/
/*    three method for template implementation                                    */
/*  first:declaration and definition in the same file (recommended)               */
/* second:explicit declaration in another file                                    */
/*  third:using "export" before template class in another file(maybe unsupported) */
/**********************************************************************************/
