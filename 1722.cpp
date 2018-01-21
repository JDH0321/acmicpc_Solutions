#include <iostream>

using namespace std;

int main(void)
{
  int N, sm, k;
  int soon[21] = {0};
  cin >> N >> sm;

  if(sm == 1)
  {
      cin >> k;
  }
  else
  {
    for(int i = 1 ; i <= N ; i++)
    {
      cin >> soon[i];
    }
  }
  return 0;
}
