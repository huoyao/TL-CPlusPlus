#include "template.h"

template<typename T>
void TemplateClass<T>::setData(const T &d)
{
  data = d;
}

template<typename T>
T TemplateClass<T>::getData()
{
  return data;
}

//mark for creating template class object dynamically
template class TemplateClass<double>;  
template class TemplateClass<int>;