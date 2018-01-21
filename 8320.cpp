#include <iostream>

using namespace std;

int cnt(int);

int main(void)
{
  int n;
  int result = 1;
  cin >> n;

  for(int i = 2 ; i <= n ; i++)
    result += cnt(i);

  cout << result << endl;
  return 0;
}

int cnt(int i) //약수의 개수 / 2 or /2 + 1
{
  int result = 0;

  for(int x = 1 ; x <= i ; x++)
  {
    if(i % x == 0)
      result++;
  }

  if(result % 2 == 0)
    result /= 2;
  else
    result = result / 2 + 1;
    
  return result;
}
