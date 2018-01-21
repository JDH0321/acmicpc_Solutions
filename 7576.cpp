#include <iostream>
#include <vector>
using namespace std;

int result = 0;

void tomato(int int);

int main(void)
{
  int box[1002][1002] = {0};
  int m, n, total = 0;
  cin >> m >> n;

  for(int i = 1 ; i <= n ; i++)
    for(int j = 1 ; j <= m ; j++)
    {
      cin >> box[i][j];
      if(box[i][j] != -1)
        total++;
    }

  for(int i = 0 ; i <= n+1 ; i++)
  {
    box[i][0] = -99;
    box[i][m+1] = -99;
  }

  for(int i = 0 ; i <= m+1 ; i++)
  {
    box[0][i] = -99;
    box[n+1][i] = -99;
  }




  /*
  for(int i = 0 ; i <= n+1 ; i++)
  {
    for(int j = 0 ; j <= m+1 ; j++)
      cout << box[i][j] << " ";
    cout << endl;
  }
  */

  return 0;
}

void tomato(int i, int j)
{

}
