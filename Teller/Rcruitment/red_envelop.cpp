#if 0
// from kujiale 2015-8-12 22:21:11

#include <cstdio>
#include <iostream>
#include <ctime>
#include <set>
#include <cmath>
using namespace std;

void hongbao()
{
  int num;
  float mony;
  cin >> num >> mony;
  if(num == 0 || fabs(mony - 0.) < 1e-7) return;
  int scal = mony * 100;
  int id = num - 1;
  set<int> cut_id;
  srand(time(NULL));
  while(id)
  {
    int cut_temp = rand() % (scal - 1) + 1;
    if(!cut_id.count(cut_temp))
    {
      cut_id.insert(cut_temp);
      --id;
    }
  }
  cut_id.insert(scal);
  int pre_id = 0;
  id = 1;
  cout << "******red envelop cut********" << endl;
  for(set<int>::iterator it = cut_id.begin();it != cut_id.end();++it)
  {
    printf("%02d:%.2f\n", id++, (*it - pre_id) / 100.f);
    pre_id = *it;
  }
  printf("total:%.2f\n\n", mony);
  return;
}

void redEnvelop()
{
  int num;
  float amount;
  cin >> num >> amount;
  if(num == 0 || fabs(amount - 0.) < 1e-7) return;
  int scal = amount * 100;
  int id = 1;
  srand(time(NULL));
  cout << "******red envelop remain********" << endl;
  while(num>1)
  {
    --num;
    int rand_temp = rand() % (scal - num) + 1;
    printf("%02d:%.2f\n", id++, rand_temp / 100.f);
    scal -= rand_temp;
  }
  printf("%02d:%.2f\n", id++, scal / 100.f);
  printf("total:%.2f\n\n", amount);

}

int main()
{
  int cnt = 10;
  while(cnt--)
  {
    hongbao();
    redEnvelop();
  }
  printf("hh");
  return 0;
}
#endif
