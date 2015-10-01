#if 0
#include <iostream>
using namespace std;

const long long N = 100000005;
long long fb[N];

int main(void)
{
  fb[0] = 0;
  fb[1] = 1;
  for(long long i = 2;i < N;++i)
  {
    fb[i] = fb[i - 1] + fb[i - 2];
  }
  long long t, a, b;
  cin >> t;
  for(long long i = 0;i < t;++i)
  {
    cin >> a >> b;
    long long res = fb[a] % fb[b];
    res %= 1000000007;
    cout << res << endl;
  }
  return 0;
}
#endif
