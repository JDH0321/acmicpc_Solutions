#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
  int scores[9] = {0};
  int temp[9] = {0};
  for(int i = 1 ; i < 9 ; i++)
  {
    int score;
    cin >> score;
    scores[i] = score;
    temp[i] = score;
  }

  sort(temp+1, temp+9);
  int sum = 0;
  for(int i = 8 ; i > 3 ; i--)
    sum += temp[i];
  cout << endl;
  for(int i = 8 ; i > 3 ; i--)
  {
    for(int j = 1 ; j < 9 ; j++)
    {
      if(temp[i] == scores[j] && scores[j] != -1)
      {
        scores[j] = -1;
        break;
      }
    }
  }

  cout << sum << endl;

  for(int i = 1 ; i < 9 ; i++)
  {
    if(scores[i] == -1)
      cout << i << " ";
  }
  return 0;
}
