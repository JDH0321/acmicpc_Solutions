#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
  vector<string> DorB;
  vector<string> DandB;
  int N,M;
  cin >> N >> M;
  int name_cnt = N+M;

  while(name_cnt--)
  {
    string name;
    cin >> name;
    DorB.push_back(name);
  }

  sort(DorB.begin(), DorB.end());

  for(int i = 1 ; i < (N+M) ; )
  {
    if(DorB[i].compare(DorB[i-1]) == 0)
    {
      DandB.push_back(DorB[i]);
      i += 2;
    }
    else
      i++;
  }

  cout << DandB.size() << endl;
  for(int i = 0 ; i < DandB.size() ; i++)
    cout << DandB[i] << endl;
  return 0;
}
