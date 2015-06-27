#include <iostream>
#include <memory>
using namespace std;

int main()
{
  //double free
  {
    int *pt = new int(1);
    {
      shared_ptr<int> sp1(pt);
      //shared_ptr<int> sp2(pt);  //must be commented, otherwise, causing double free
    }
    cout << "stopped before here, double free" << endl;
  }

  //dangling pointer
  {
    int *pt = new int(1);
    int *pt1 = pt;
    delete pt;
    cout <<"pt1:" <<*pt1<<"  pt2:"<<*pt << endl;    //undefined pt1 and pt2
}

  //no double free
  {
    int *pt = new int(1);
    {
      shared_ptr<int> sp1(pt);
      shared_ptr<int> sp2(sp1);
    }
    cout << "no double free, everything gone ok" << endl;
  }

  //get value
  {
    //shared_ptr<int> sp = make_shared<int>(new int[10], [](int *p) { delete[] p; });  //error for make_shared<int>
    shared_ptr<int> sp(new int[10], [](int *p) { delete[] p; });
    for(int i = 0;i < 10;++i)
      *(sp.get() + i) = i;
    for(int i = 0;i < 10;++i)
      cout << *(sp.get() + i) << "  ";
    cout << endl;
  }
  system("pause");
  return 0;
}