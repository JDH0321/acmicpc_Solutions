#include <iostream>

using namespace std;

int main(void)
{
  for(int i = 0 ; i < 3 ; i++)
  {
    int yut, b = 0, d = 0;
    for(int j = 0 ; j < 4 ; j++)
    {
      cin >> yut;
      if(yut == 0)
        b++;
      else
        d++;
    }

    if(b == 1)
      cout << "A" << endl;
    else if(b == 2)
      cout << "B" << endl;
    else if(b == 3)
      cout << "C" << endl;
    else if(b == 4)
      cout << "D" << endl;
    else
      cout << "E" << endl;
  }
  return 0;
}
