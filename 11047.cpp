#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int N, K;
  cin >> N >> K;
  vector<int> v;

  while(N--)
  {
    int coin;
    cin >> coin;
    v.push_back(coin);
  }

  int cnt = 0;

  for(int i = v.size() - 1 ; i >= 0 && K != 0; i--)
  {
    int m = K / v[i];
    cnt += m;
    K -= (v[i] * m);
  }

  cout << cnt << endl;
  return 0;
}
