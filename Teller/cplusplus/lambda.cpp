#if 0

#include <iostream>
#include <functional>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
  char ch = '!'; // a local unmanaged variable

  // The following lambda expression captures local variables
  // by value and takes a managed String object as its parameter.
  auto f = [ = ](string s)
  {
    cout << string(s + ch) << endl;
  };
  f("hello");  //hello!

  //no return value, no need ()
  auto fprint = [&, ch] { cout << ch << endl; };
  fprint();  //!


  //declare function var, for mutable lambda exp
  function<void(void)> ff = [&, ch] () mutable
  {
    ch = '*';  //mutable, can change ch temporarily
    cout << "mutable used:" << ch << endl;
  };
  ff();  //mutable used:*

  //access by refernce
  function<void(void)> fref = [ =, &ch]()
  {
    ch = '*';  //access ch by-refrence, can change ch really
    cout << "refrence used:" << ch << endl;
  };
  fref();  //refrence used:*

  cout << "after refrence:" << ch << endl;  //afer refrence:*

  system("pause");
  return 0;
}

#endif
