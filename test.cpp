#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
  vector<int[2]> v;

  int temp[2] = {1,2};
  v.push_back(temp);

  for(int i = 0 ; i < v.size() ; i++)
  {
    cout << v[i][0] << endl;
  }
  return 0;
}
