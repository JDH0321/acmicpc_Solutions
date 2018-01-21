#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
  int n;
  double a, b, douCal, maxCal;
  int toping[1000] = {0};

  cin >> n >> a >> b >> douCal;

  for(int i = 0 ; i < n ; i++)
    cin >> toping[i];

  sort(toping, toping+n);

  maxCal = douCal / a;

  double toping_cals = 0;
  for(int i = n-1, x = 1 ; i >= 0 ; i--, x++)
  {
    toping_cals += toping[i];
    maxCal = max(maxCal, (douCal + toping_cals)/(a + b*x));
  }
  printf("%d\n", (int)maxCal);
  return 0;
}
