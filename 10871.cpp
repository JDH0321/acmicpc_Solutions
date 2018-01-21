#include <iostream>

using namespace std;

int main(void)
{
  int N, X;
  cin >> N >> X;
  while(N--)
  {
    int num;
    cin >> num;
    if(X > num)
      cout << num << " ";
  }
  cout << endl;
  return 0;
}
