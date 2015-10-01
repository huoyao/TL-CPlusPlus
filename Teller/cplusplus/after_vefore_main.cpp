#if 0

#include <iostream>
#include <cstdlib>
#include <crtdbg.h>
#include <cassert>
using namespace std;

//for memory leak check
#ifdef _DEBUG
#define DEBUG_CLIENTBLOCK new(_CLIENT_BLOCK,__FILE__,__LINE__)
#else
#define DEBUG_CLIENTBLOCK
#endif
#define _CRTDBG_MAP_ALLOC
#ifdef _DEBUG
#define new DEBUG_CLIENTBLOCK
#endif


// method 0 :lambda
int before0 = []()
{
  cout << "globle array before main" << endl;
  return 0;
}();

// method 1:globle variable
int beforeMain()
{
  cout << "globle funtion call  before main" << endl;
  return 0;
}
int before1 = beforeMain();

// method 2:golble class object
class BeforeMainClass
{
public:
  BeforeMainClass() {
    printf("%s called \n", __FUNCTION__);
  }
  ~BeforeMainClass() {}
} before_class;

// method 0: atexit call fuction
void checkMemoryLeak()
{
  _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
  int m_count = _CrtDumpMemoryLeaks();
  cout << "after main" << endl;
  assert(m_count == 0);
}

//for gcc compile
//#ifdef linux
__attribute__((constructor))
void function_before_main()
{
  printf("%s called \n", __FUNCTION__);
}

__attribute__((destructor))
void function_after_main()
{
  printf("%s called \n", __FUNCTION__);
}
//#endif
//end for gcc compile

int main()
{
  atexit(checkMemoryLeak);
  static bool first = true;
  if (first)
  {
    cout << "recursive call before main" << endl;
    first = false;
    main();
  }
  printf("%s called \n", __FUNCTION__);

  //for memory check
  int *p = new int;

  system("pause");
  return 0;
}

#endif
