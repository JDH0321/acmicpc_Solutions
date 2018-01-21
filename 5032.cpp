#include <iostream>

using namespace std;

int main(void)
{
  int e, f, c;
  cin >> e >> f >> c;

  int ini_empty = e+f;
  int result = 0;
  while(ini_empty >= c)
  {
    int temp = ini_empty % c;
    result += ini_empty / c;
    ini_empty = ini_empty / c + temp;
  }

  cout << result << endl;
  return 0;
}
