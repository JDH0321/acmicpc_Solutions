#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
  int T, N, C;
  double G;
  cin >> T;
  while(T--)
  {
    cin >> N;
    int sum_C = 0;
    double sum_G = 0;

    for(int i = 0 ; i < N ; i++)
    {
      cin >> C >> G;
      sum_C += C;
      sum_G += (C*G);
    }
    printf("%d %.1f\n", sum_C, sum_G/sum_C);
  }
  return 0;
}
