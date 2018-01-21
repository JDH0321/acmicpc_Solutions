#include <iostream>
using namespace std;

int main(void)
{
  int fac[13] = {0};
  int N;
  cin >> N;

  fac[0] = 1;
  for(int i = 1 ; i <= N ; i++)
  {
    fac[i] = fac[i-1] * i;
  }

  cout << fac[N] << endl;
  return 0;
}
