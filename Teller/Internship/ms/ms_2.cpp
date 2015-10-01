#if 0
//input:
//6
//25
//83
//96
//9999967
//1999976
//000000

#include <unordered_set>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	char *input = (char *)malloc(505);
	unordered_set<int> uset[10] = { { 0 }, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 0, 2, 3, 5, 6, 8, 9 }, { 3, 6, 9 }, { 0, 4, 5, 6, 7, 8, 9 },
	{ 0, 5, 6, 8, 9 }, { 6, 9 }, { 0, 7, 8, 9 }, { 0, 8, 9 }, { 9 } };
	int n;
	scanf("%d", &n);
	for (size_t i = 0; i < n; ++i)
	{
		string outstr = "";
		scanf("%s", input);
		int len = strlen(input);
		size_t j;
		for (j = 0; j < len; ++j)
		{
      outstr += input[j];
      //the forward element can not reach the current element
      if(j && uset[outstr[j - 1] - '0'].count(outstr[j]-'0')==0)
      {
        bool find = false;
        int cur = outstr[j] - '0', pre = outstr[j - 1] - '0',jtmp=j;
        while(!find && jtmp>0 && uset[pre].count(cur)==0)
        {
          while(cur >= *uset[pre].begin() && uset[pre].count(cur) == 0) --cur;
          if(cur >= *uset[pre].begin()) find = true;
          else
          {
            --jtmp;
            cur = outstr[jtmp] - '0';
            --cur;
            if(jtmp>0)pre = outstr[jtmp - 1] - '0';
          }
        }
        if(jtmp == 0)
        {
          outstr = "";
          if(cur == 0) outstr="0";
          else
          {
            outstr = '0' + cur;
            outstr += string(len - 1, '9');
          }
        } else
        {
          outstr[jtmp] = '0' + cur;
          int last = 9;
          if(cur == 0) last = 0;
          for(size_t k = jtmp + 1;k <=j;++k)
            outstr[k] = '0'+last;
          outstr += string(len - j-1, '0'+last);
        }
        break;
      }
		}
		printf("%s\n", outstr.c_str());
	}
	delete input;
	return 0;
}
#endif
