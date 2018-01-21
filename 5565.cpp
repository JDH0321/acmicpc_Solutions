#include <iostream>

using namespace std;

int main(void)
{
  int total, price, sum = 0;
  cin >> total;
  for(int i = 0 ; i < 9 ; i++)
  {
    cin >> price;
    sum += price;
  }
  cout << total - sum << endl;
  return 0;
}
