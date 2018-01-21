#include <iostream>

using namespace std;

int main(void)
{
  int N, K, stop = 0;
  int era[1001] = {0};
  int del_cnt = 0;

  cin >> N >> K;

  for(int i = 2 ; i <= N ; i++)
  {
    if(era[i] == 0)
    {
      for(int j = 1 ; i*j <= N ; j++)
      {
        if(era[i * j] == 0)
        {
          era[i * j] = 1;
          del_cnt++;
          if(del_cnt == K)
          {
            cout << i*j << endl;
            stop = 1;
            break;
          }
        }
      }
    }

    if(stop)
      break;
  }


  return 0;
}
