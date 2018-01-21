#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(void)
{
  int a, b, c;
  cin >> a >> b >> c;

  char abc[12];
  sprintf(abc, "%d", a*b*c);

  int res[10] = {0};
  int len = strlen(abc);
  for(int i = 0 ; i < len ; i++)
    res[(int)(abc[i] - '0')]++;

  for(int i = 0 ; i < 10 ; i ++)
    cout << res[i] << endl;

  return 0;
}
