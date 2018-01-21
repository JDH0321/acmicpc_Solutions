#include <iostream>

using namespace std;

int main(void)
{
  int price, mok;
  cin >> price;
  price = 1000 - price;
  int result = 0;

  mok = price / 500;
  result += mok;
  price -= 500 * mok;

  mok = price / 100;
  result += mok;
  price -= 100 * mok;

  mok = price / 50;
  result += mok;
  price -= 50 * mok;

  mok = price / 10;
  result += mok;
  price -= 10 * mok;

  mok = price / 5;
  result += mok;
  price -= 5 * mok;

  result += price;

  cout<<result<<endl;
  return 0;
}
