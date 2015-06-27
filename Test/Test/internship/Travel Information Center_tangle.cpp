#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

struct City
{
  int dst;
  vector<int> *adj_city;
};

void informAdjCity(City *city,const int &id)
{
  if(city[id].dst == 0) return;
  else city[id].dst = 0;
  int adj_city_id;
  for(size_t i = 0;i < city[id].adj_city->size();++i)
  {
    adj_city_id = city[id].adj_city->at(i);
    if(city[adj_city_id].dst != 0) city[adj_city_id].dst = 1;
  }
}

void findClosest(City *city,const int &id)
{
  if(city[id].dst < 2)
  {
    printf("%d\n",city[id].dst);
    return;
  }
  unordered_set<int> visited;
  int layer_num=0,id0=0,id1=1,cur_id,visit_id;
  vector<int> vec_id[2];
  vec_id[0].push_back(id);
  while(1)
  {
    ++layer_num;
    for(size_t i = 0;i < vec_id[id0].size();++i)
    {
      cur_id = vec_id[id0][i];
      visited.insert(cur_id);
      for(size_t j = 0;j < city[cur_id].adj_city->size();++j)
      {
        visit_id = city[cur_id].adj_city->at(j);
        if(visited.count(visit_id)) continue;
        if(city[visit_id].dst < 2)
        {
          printf("%d\n", city[visit_id].dst + layer_num);
          return;
        }
        vec_id[id1].push_back(visit_id);
      }
    }
    swap(id0,id1);
    vec_id[id1].clear();
  }
  return;
}

int main()
{
  int n, m;
  scanf("%d%d",&n,&m);
  City *cities = (City *)malloc(sizeof(City)*(n+1));
  for(size_t i = 0;i < n + 1;++i)
  {
    cities[i].dst = 2;
    cities[i].adj_city = new vector<int>();
  }
  int city0, city1;
  //input relation ship between cities
  for(size_t i = 1;i < n;++i)
  {
    scanf("%d%d", &city0, &city1);
    cities[city0].adj_city->push_back(city1);
    cities[city1].adj_city->push_back(city0);
  }
  //initialize the first city
  informAdjCity(cities, 1);
  //for queries
  int query, value;
  for(size_t i = 0;i < m;++i)
  {
    scanf("%d%d", &query, &value);
    switch(query)
    {
    case 2:
      findClosest(cities,value);
      break;
    case 1:
      informAdjCity(cities,value);
    default:
      break;
    }
  }
  //free memory
  for(size_t i = 0;i < n + 1;++i)
  {
    delete cities[i].adj_city;
  }
  free(cities);
  return 0;
}