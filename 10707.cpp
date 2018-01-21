#include <iostream>

using namespace std;

int main(void)
{
  int a, b, c, d, p;
  cin >> a >> b >> c >> d >> p;

  int x,y;
  x = a * p;

  if(p <= c)
    y = b;
  else
    y = b + (p-c)*d;
    
  cout << min(x,y) << endl;
  return 0;
}
