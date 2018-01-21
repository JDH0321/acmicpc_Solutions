#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(void)
{
  char command[12] = "";
  vector<int> v;

  int N;
  cin >> N;
  getchar();

  while(N--)
  {
    cin.getline(command, 12, '\n');
    if(!strcmp(command, "pop"))
    {
      if(v.size() == 0)
        cout << -1 << endl;
      else
      {
          cout << v.back() << endl;
          v.pop_back();
      }
    }
    else if(!strcmp(command, "size"))
    {
      cout << v.size() << endl;
    }
    else if(!strcmp(command, "empty"))
    {
      if(v.size() == 0)
        cout << 1 << endl;
      else
        cout << 0 << endl;
    }
    else if(!strcmp(command, "top"))
    {
      if(v.size() == 0)
        cout << -1 << endl;
      else
        cout << v.back() << endl;
    }
    else
    {
      char* token = strtok(command, " ");
      token = strtok(NULL, " ");
      v.push_back(atoi(token));
    }
  }
  return 0;
}
