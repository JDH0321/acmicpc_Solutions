#include <iostream>

using namespace std;
int main(void)
{
  int h = 2001, b = 2001;

  for(int i = 0 ; i < 3 ; i++)
  {
    int price;
    cin >> price;
    h = min(h, price);
  }

  for(int i = 0 ; i < 2 ; i++)
  {
    int price;
    cin >> price;
    b = min(b, price);
  }

  cout << h + b - 50 << endl;
  return 0;
}
