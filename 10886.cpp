#include <iostream>

using namespace std;

int main(void)
{
  int N, num, zero = 0, one = 0;
  cin >> N;
  while(N--)
  {
    cin >> num;
    if(num)
      one++;
    else
      zero++;
  }

  if(one > zero)
    cout << "Junhee is cute!" << endl;
  else
    cout <<"Junhee is not cute!" << endl;
    
  return 0;
}
