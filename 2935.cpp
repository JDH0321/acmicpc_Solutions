#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
  char a[110] = {0};
  char b[110] = {0};
  char result[220] = "1";
  char oper;

  cin >> a;
  getchar();
  cin >> oper;
  cin >> b;

  int zero_len_a = strlen(a) - 1;
  int zero_len_b = strlen(b) - 1;

  if(oper == '*')
  {
    int zero_len_result = zero_len_a + zero_len_b;
    for(int i = 0 ; i < zero_len_result ; i++)
      strcat(result, "0");
  }
  else
  {
    if(zero_len_a == zero_len_b)
    {
      strcpy(result, "2");
      for(int i = 0 ; i < zero_len_a ; i++)
        strcat(result, "0");
    }
    else if(zero_len_a > zero_len_b)
    {
      int zero_len = zero_len_a - strlen(b);
      for(int i = 0 ; i < zero_len ; i++)
        strcat(result, "0");
      strcat(result, b);
    }
    else
    {
      int zero_len = zero_len_b - strlen(a);
      for(int i = 0 ; i < zero_len ; i++)
        strcat(result, "0");
      strcat(result, a);
    }
  }

  cout << result << endl;
  return 0;
}
