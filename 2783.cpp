#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
  double mini = 100000.0;
  double cvs[101][2] = {0};
  cin >> cvs[0][0] >> cvs[0][1];

  int T;
  cin >> T;
  for(int i = 1 ; i <= T ; i++)
    cin >> cvs[i][0] >> cvs[i][1];

  for(int i = 0 ; i <= T ; i++)
    mini = min(mini, 1000 * cvs[i][0] / cvs[i][1]);

  printf("%.2lf\n", mini);
  return 0;
}
