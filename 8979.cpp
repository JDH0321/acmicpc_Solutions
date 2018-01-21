#include <iostream>
#define MAX_N 1001
using namespace std;

int main(void)
{
  int temp;
  int gold[MAX_N] = {0};
  int silver[MAX_N] = {0};
  int bronze[MAX_N] = {0};
  int rank[MAX_N] = {0};
  int N, K;
  cin >> N >> K;

  for(int i = 1 ; i <= N ; i++)
    cin >> temp >> gold[i] >> silver[i] >> bronze[i];


  return 0;
}
