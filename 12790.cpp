#include <iostream>

using namespace std;

int main(void)
{
  int T;
  cin >> T;
  while(T--)
  {
    int charc[4] = { 0 };
    for(int i = 0 ; i < 8 ; i++)
    {
      int input;
      cin >> input;
      charc[i%4] += input;
    }

    if(charc[0] < 1)
      charc[0] = 1;

    if(charc[1] < 1)
      charc[1] = 1;

    if(charc[2] < 0)
      charc[2] = 0;

    cout << 1*charc[0] + 5*charc[1] + 2*(charc[2] + charc[3]) << endl;
  }

  return 0;
}
