#include <iostream>

using namespace std;

int main(void)
{
  int a, b, c, d;
  int e, f, g, h;

  cin >> a >> b >> c >> d;
  cin >> e >> f >> g >> h;

  cout << max(a+b+c+d, e+f+g+h) << endl;
  return 0;
}
