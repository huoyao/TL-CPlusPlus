#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str("жпнд");
  cout << str.size()<<endl;
  string *s=new string();
  cout << sizeof(*s) << " " << sizeof(s) << endl;
  *s = "123456789211111111111112222222222222111111111111111111111111111111111111111111111111111111";
  cout << sizeof(*s) << " " << sizeof(s) << endl;
  char *c = "12312333333333333333333";
  cout << sizeof(str) << endl;
  cout<<sizeof(*c) << endl;
  cout << *s << endl;
  delete s;
  return 0;
}