#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  int n;
  cin >> n;
  while(n)
  {
    int prime_cnt = 0;
    int last = 2*n;

    for(int i = n+1 ; i <= last ; i++)
    {
      int sqrt_i = (int)sqrt(i);
      int prime = 1;

      for(int j = 2 ; j <= sqrt_i ; j++)
      {
        if(i % j == 0)
        {
          prime = 0;
          break;
        }
      }

      if(prime == 1)
        prime_cnt++;
    }

    cout << prime_cnt << endl;

    cin>>n;
  }
  return 0;
}
