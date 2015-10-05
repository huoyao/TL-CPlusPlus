/*************************************
/  FILE:MemoryLeakChecker.h
/  TIME:2015-10-05 11:10:58
/AUTHOR:huoyao
/  INFO:
/*************************************/

#ifndef __MemoryLeakChecker_H__
#define __MemoryLeakChecker_H__

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include <cassert>

//for memory leak check
#ifdef _DEBUG
  #ifndef DBG_NEW
    #define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
    #define new DBG_NEW
  #endif
#endif  // _DEBUG

inline void checkMemoryLeak() {
  _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
  int m_count = _CrtDumpMemoryLeaks();
  //std::cout << "after main" << std::endl;
  assert(m_count == 0);
}

#endif