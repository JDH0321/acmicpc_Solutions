#include <iostream>

using namespace std;

int main(void)
{
  char input[5][16] = {0};

  for(int i = 0 ; i < 5 ; i++)
    cin >> input[i];

  for(int i = 0 ; i < 16 ; i++)
    for(int j = 0 ; j < 5 ; j++)
    {
      if(input[j][i] == 0)
        continue;
      else
        cout << input[j][i];
    }
  cout << endl;
  return 0;
}
