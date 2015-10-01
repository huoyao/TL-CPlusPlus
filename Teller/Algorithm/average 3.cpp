#if 0
#include <iostream>
using namespace std;

struct point
{
  double x, y, z;
  point(){}
  point(const double &a, const double &b, const double &c):x(a), y(b), z(c){}
};

point average3(const point &p1,const point &p2)
{
  return point((p1.x + p2.x) / 2., (p1.y + p2.y) / 2., (p1.z + p2.z) / 2.);
}

int main()
{
  point p1, p2;
  while(scanf("%lf%lf%lf%lf%lf%lf", &p1.x, &p1.y, &p1.z, &p2.x, &p2.y, &p2.z))
  {
    point res = average3(p1, p2);
    cout << res.x << " " << res.y << " " << res.z << endl<<endl;
  }
  return 0;
}
#endif
