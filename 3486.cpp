#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

void reverse_arr(char*, int);

int main(void)
{
  int N;
  cin >> N;
  while(N--)
  {
    char num1[11] = {0};
    char num2[11] = {0};
    char res[11] = {0};

    cin >> num1 >> num2;
    reverse_arr(num1, strlen(num1));
    reverse_arr(num2, strlen(num2));
    sprintf(res, "%d", atoi(num1) + atoi(num2));
    reverse_arr(res, strlen(res));
    cout<<atoi(res)<<endl;
  }

  return 0;
}

void reverse_arr(char* arr, int len)
{
  int i = 0;
  int j = len-1;
  int half = len / 2;

  for(int x = 0 ; x < half ; x++, i++, j--)
  {
    char temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}
