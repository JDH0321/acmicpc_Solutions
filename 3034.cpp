#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
  int N, W, H, len;
  double dia;
  cin >> N >> W >> H;
  dia = sqrt(W*W + H*H);
  while(N--)
  {
    cin >> len;
    if(len <= W || len <= H || len <= dia)
      cout << "DA" << endl;
    else
      cout << "NE" << endl;
  }
  return 0;
}
