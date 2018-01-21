#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

void vps(vector<char>&);

int main(void)
{
  int T;
  cin >> T;
  getchar();

  while(T--)
  {
    vector<char> v;
    char c = getchar();
    while(c != '\n')
    {
      v.push_back(c);
      c = getchar();
    }

    vps(v);
  }
  return 0;
}

void vps(vector<char> &v)
{
  vector<char> temp;

  int len = v.size();
  for(int i = 0 ; i < len ; i++)
  {
    char p = v.back();
    v.pop_back();
    if(p == ')')
      temp.push_back(p);
    else
    {
      if(temp.size() == 0)
      {
        cout << "NO" << endl;
        return;
      }
      else
        temp.pop_back();
    }
  }

  if(temp.size() != 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}
