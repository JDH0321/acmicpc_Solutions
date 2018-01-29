#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
  int N;
  cin >> N;
  getchar();
  while(N--)
  {
    char num[11] = {0};
    vector<int> v;
    int i = 0;
    while(1)
    {
      char c = getchar();
      if(c == ' ')
      {
        v.push_back(atoi(num));
        memset(num, 0, 11);
        i = 0;
      }
      else if(c == '\n')
      {
        v.push_back(atoi(num));
        break;
      }
      else
      {
        num[i] = c;
        i++;
      }
    }

    int size = v.size();
    int maxi = 0;
    for(int i = 0 ; i < size ; i++)
      if(v[i] > maxi)
        maxi = v[i];

    int maxGCD = 0;
    int limit = maxi/2;
    for(int i = 1 ; i <= limit ; i++)
    {
        int cnt = 0;
        for(int j = 0 ; j < size ; j++)
        {
          if(v[j] % i == 0)
            cnt++;
        }
        if(cnt >= 2)
          maxGCD = i;
    }

    cout << maxGCD << endl;
  }
  return 0;
}
