#include <iostream>

using namespace std;

int main(void)
{
  int L, B, A, C, D;
  cin >> L >> A >> B >> C >> D;
  int do_day = 0;

  if(B % D == 0)
    do_day = B / D;
  else
    do_day = B / D + 1;

  if(A % C == 0)
    do_day = max(do_day, A/C);
  else
    do_day = max(do_day, A/C+1);

  cout << L-do_day << endl;
  return 0;
}
