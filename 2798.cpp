#include <iostream>
using namespace std;

int main(void)
{
  int num[100] = {0};
  int N, M;
  cin >> N >> M;

  for(int i = 0 ; i < N ; i++)
  {
    int temp;
    cin >> temp;
    num[i] = temp;
  }


  return 0;
}
