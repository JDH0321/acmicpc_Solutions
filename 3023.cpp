#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
  int r, c , e_r, e_c;
  char result[202][202] = {0};

  cin >> r >> c;
  for(int i = 1 ; i <= r; i++)
  {
    for(int j = 1 ; j <= c ; j++)
        cin >> result[i][j];
    getchar();
  }

  //상-우
  for(int i = 1 ; i <= r ; i++)
  {
    int x = 1;
    for(int j = c+1 ; j <= c*2 ; j++)
    {
       result[i][j] = result[i][j-x];
       x+=2;
    }
  }

  //하 - 좌
  int x = 1;
  for(int i = r+1 ; i <= r*2 ; i++)
  {
    for(int j = 1 ; j <= c ; j++)
      result[i][j] =  result[i-x][j];
    x += 2;
  }

  //하-우
  for(int i = r+1; i <= r*2 ; i++)
  {
    int x = 1;
    for(int j = c+1 ; j <= c*2 ; j++)
    {
      result[i][j] = result[i][j-x];
      x+=2;
    }
  }


  cin >> e_r >> e_c;

  for(int i = 1 ; i <= r*2 ; i++)
  {
    for(int j = 1 ; j <= c*2 ; j++)
    {
      if(i == e_r && j == e_c && result[i][j] == '#')
        cout << '.';
      else if(i == e_r && j == e_c && result[i][j] == '.')
        cout << '#';
      else
        cout << result[i][j];
    }
    cout << endl;
  }
  return 0;
}
