#include<iostream>
using namespace std;

bool checkWin(char d[4][4], char des){
  int sum = 0;
  int sum2 = 0;
  for(int i = 0; i < 3; i++)
  {
    sum = 0;
    sum2 = 0;
    for(int j = 0; j < 3; j++)
    {
      sum += d[i][j];
      sum2 += d[j][i];
    }
    if(sum == des * 3)
    {
      return true;
    }
    if(sum2 == des * 3)
    {
      return true;
    }
  }
  sum = sum2 = 0;
  for(int i = 0; i < 3; i++)
  {
    sum += d[i][i];
    sum2 += d[2 - i][i];
  }
  if(sum == des * 3)
  {
    return true;
  }
  if(sum2 == des * 3)
  {
    return true;
  }
  return false;
}

bool checkWinNext(char d[4][4], char des){
  int sum = 0;
  int sum2 = 0;
  for(int i = 0; i < 3; i++)
  {
    sum = 0;
    sum2 = 0;
    for(int j = 0; j < 3; j++)
    {
      sum += d[i][j];
      sum2 += d[j][i];
    }
    if(sum == des * 2 + '_')
    {
      return true;
    }
    if(sum2 == des * 2 + '_')
    {
      return true;
    }
  }
  sum = sum2 = 0;
  for(int i = 0; i < 3; i++)
  {
    sum += d[i][i];
    sum2 += d[2 - i][i];
  }
  if(sum == des * 2 + '_')
  {
    return true;
  }
  if(sum2 == des * 2 + '_')
  {
    return true;
  }
  return false;
}
int main(){
  int n;
  char d[4][4];
  int oc;
  int xc;
  scanf("%d", &n);
  for(int p = 0; p < n; p++)
  {
    oc = 0;
    xc = 0;
    for(int i = 0; i < 3; i++)
    {
      scanf("%s", &d[i]);
      for(int j = 0; j < 3; j++)
      {

        if(d[i][j] == 'O')
        {
          oc++;
        } else if(d[i][j] == 'X')
        {
          xc++;
        }
      }

    }
    //eck invalid or not
    if(xc < oc || xc > oc + 1)
    {
      printf("Invalid\n");
      continue;
    } else
    {
      if(xc == oc)
      {
        if(checkWin(d, 'X'))
        {
          printf("Invalid\n");
          continue;
        } else if(checkWin(d, 'O'))
        {
          printf("O win\n");
          continue;
        } else if(xc + oc == 9)
        {
          printf("Draw\n");
          continue;
        } else
        {
          if(checkWinNext(d, 'X'))
          {
            printf("Next win\n");
            continue;
          } else
          {
            printf("Next cannot win\n");
            continue;
          }
        }

      } else if(xc == oc + 1)
      {
        if(checkWin(d, 'O'))
        {
          printf("Invalid\n");
          continue;
        } else if(checkWin(d, 'X'))
        {
          printf("X win\n");
          continue;
        } else if(xc + oc == 9)
        {
          printf("Draw\n");
          continue;
        } else
        {
          if(checkWinNext(d, 'O'))
          {
            printf("Next win\n");
            continue;
          } else
          {
            printf("Next cannot win\n");
            continue;
          }
        }


      }
    }
  }
}
