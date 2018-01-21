#include <iostream>

using namespace std;

int main(void)
{
  int N;
  cin >> N;

  int result = 987654321;


  for(int i = N/5 ; i >= 0 ; i--)
  {
    int remain = N - 5*i;
    if(remain == 0)
    {
      result = N/5;
      break;
    }
    if(remain % 3 == 0)
    {
      result = min(result, i + remain / 3);
    }
  }

  if(result == 987654321)
    cout << -1 << endl;
  else
    cout << result << endl;

  return 0;
}
