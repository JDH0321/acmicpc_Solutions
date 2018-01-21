#include <iostream>

enum {SUN, MON, TUE, WED, THU, FRI, SAT};
using namespace std;

int main(void)
{
  int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int m, d , day = 0;
  cin >> m >> d;

  for(int i = 1 ; i < m ; i++)
    day += days[i];

  day += d;
  
  int yoil = day % 7;

  if(yoil == SUN)
    cout << "SUN" << endl;
  else if(yoil == MON)
    cout << "MON" << endl;
  else if(yoil == TUE)
    cout << "TUE" << endl;
  else if(yoil == WED)
    cout << "WED" << endl;
  else if(yoil == THU)
    cout << "THU" << endl;
  else if(yoil == FRI)
    cout << "FRI" << endl;
  else
    cout << "SAT" << endl;


  return 0;
}
