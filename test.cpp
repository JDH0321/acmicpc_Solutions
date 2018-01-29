#include <iostream>

using namespace std;

int main(void)
{
  unsigned long long a = 1;

  for(int i = 2 ; i <= 20 ; i++)
    a = a * i;

    cout << a << endl;
  return 0;
}
