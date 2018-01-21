#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
  int a, b, c;
  while(1)
  {
    cin >> a >> b >> c;
    if(a==0 && b==0 && c==0)
      break;

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.begin()+3);

    if(v[0]*v[0] + v[1]*v[1] == v[2]*v[2])
      cout<<"right"<<endl;
    else
      cout<<"wrong"<<endl;
  }
  return 0;
}
