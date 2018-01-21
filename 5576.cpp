#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  int score_W, score_K;
  int input[2][10] = {0};

  for(int i = 0 ; i <= 1 ; i++)
    for(int j = 0 ; j < 10 ; j++)
      cin >> input[i][j];

  sort(input[0], input[0]+10);
  sort(input[1], input[1]+10);

  score_W = input[0][9] + input[0][8] + input[0][7];
  score_K = input[1][9] + input[1][8] + input[1][7];

  cout << score_W << " " << score_K << endl;
  return 0;
}
