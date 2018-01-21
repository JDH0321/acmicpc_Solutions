#include <iostream>
using namespace std;

int main(void)
{
  int paper[101][101] = {0};
  int sak, area = 0;
  cin >> sak;

  while(sak--)
  {
    int x, y;
    cin >> x >> y;

    for(int i = y ;  i < (y+10) ; i++)
      for(int j = x ; j < (x+10) ; j++)
        paper[i][j] = 1;
  }

  for(int i = 0 ; i < 101 ; i++)
    for(int j = 0 ; j <101 ; j++)
      if(paper[j][i] == 1)
        area++;

  cout << area << endl;
  
  return 0;
}
