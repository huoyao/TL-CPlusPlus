#include<iostream>
using namespace std;

int MD[10000];
int map[100000][3] = { 0 };
int idx[100000];
int mcount[100000];

void cal(int signal){
  int i = 0;
  while(map[signal][i] != -1)
  {
    cal(map[signal][i]);
    i++;
  }
  mcount[signal] = (mcount[signal] + 1) % 142857;

}

int main(){
  int T;
  int N, M;

  scanf("%d", &T);
  for(int g = 0; g < T; g++)
  {
    //initial map;
    for(int i = 0; i < 100000; i++)
    {
      for(int j = 0; j< 3; j++)
      {
        map[i][j] = -1;
      }
    }
    for(int i = 0; i< 100000; i++)
    {
      mcount[i] = 0;
    }
    //cal

    scanf("%d %d", &N, &M);
    for(int i = 0; i < M; i++)
    {
      scanf("%d", &MD[i]);
    }
    for(int i = 0; i < N; i++)
    {
      int s, k;
      scanf("%d %d", &s, &k);
      idx[i] = s;
      for(int j = 0; j < k; j++)
      {
        int tmp;
        scanf("%d", &tmp);

        map[s][j] = tmp;
      }
    }


    for(int i = 0; i < M; i++)
    {
      cal(MD[i]);
    }

    for(int i = 0; i < N; i++)
    {
      if(i == 0)
      {
        printf("%d", mcount[idx[i]]);
      } else
      {
        printf(" %d", mcount[idx[i]]);
      }
    }
    printf("\n");
  }


}
