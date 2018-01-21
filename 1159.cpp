#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(void)
{
  char result[30] = {0};
  char name[151][31] = {0};
  int N;
  cin >> N;

  for(int i = 1 ; i <= N ; i++)
  {
    cin >> name[i];
  }

  for(int i = 'a' ; i<='z' ; i++)
  {
    int cnt = 0;
    for(int j = 1 ; j <= N ; j++)
    {
      if(name[j][0] == i)
        cnt++;
    }
    if(cnt >= 5)
      sprintf(result, "%s%c", result, i);
  }

  if(strlen(result) == 0)
    cout << "PREDAJA" << endl;
  else
    cout << result << endl;
  return 0;
}
