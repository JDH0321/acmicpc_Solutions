#include <iostream>

using namespace std;

int main(void)
{
  int num;
  int res = 0;
  cin >> num;

  for(int i = 0 ; i < 5 ; i++)
  {
      int car;
      cin >> car;
      if(num == car)
        res++;
  }

  cout << res << endl;
  return 0;
}
