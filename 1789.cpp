#include <iostream>

using namespace std;

int main(void)
{
  long long S;
  long long i;
  long long result = 0;
  cin >> S;

  for(i = 0 ; S != 0 ; i++)
  {
    if(S-i == 0)
      break;
    if(S-i >= i+1)
    {
      S -= i;
      result++;
    }
  }
  cout << result << endl;
  return 0;
}
