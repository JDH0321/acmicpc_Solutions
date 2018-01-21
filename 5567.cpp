#include <iostream>
#include <vector>
using namespace std;

int relation[501][501] = {0};
int check[501] = {0};
vector<int> v;
int n, m, result = 0;
int solution(int);

int main(void)
{
  cin >> n >> m;

  while(m--)
  {
    int i, j;
    cin >> i >> j;
    relation[i][j] = 1;
    relation[j][i] = 1;
  }

  check[1] = 1;
  for(int i = 1 ; i <= n ; i++)
  {
    if(relation[1][i] == 1 && check[i] == 0)
    {
      v.push_back(i);
      check[i] = 1;
      result++;
    }
  }

  if(v.size() != 0)
  {
    int temp = v.front();
    v.erase(v.begin());
    solution(temp);
  }

  cout << result << endl;
  return 0;
}

int solution(int start)
{
  for(int i = 1 ; i <= n ; i++)
  {
    if(relation[start][i] == 1 && check[i] == 0)
    {
      result++;
      check[i] = 1;
    }
  }

  if(v.size() == 0)
    return 0;

  int temp = v.front();
  v.erase(v.begin());
  solution(temp);
}
