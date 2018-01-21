#include <iostream>

using namespace std;

int main(void)
{
	int round = 10;
	int sum = 0, temp = 0, score = 0;

	while(round--)
	{
		cin >> score;
		temp += score;
		if(temp == 100)
		{
			sum = temp;
			break;
		}
		else if(temp > 100)
		{
			if(temp - 100 <= 100 - sum)
				sum = temp;

			break;
		}
		else
			sum = temp;
	}

	cout << sum << endl;
	return 0;
}
