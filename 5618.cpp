#include <iostream>
using namespace std;

void getCD(int, int, int);

int main(void)
{
	int n;
	int num1, num2, num3;
	cin >> n;
	if(n == 2)
	{
		cin >> num1 >> num2;
		getCD(num1, num2 ,num2);
	}
	else
	{
		cin >> num1 >> num2 >> num3;
		getCD(num1, num2, num3);
	}
	return 0;
}

void getCD(int n1, int n2, int n3)
{
	int range = min(n1, min(n2, n3));
	
	for(int i = 1 ; i <= range ; i++)
	{
		if(n1 % i == 0 && n2 % i == 0 && n3 % i == 0)
			cout << i << endl;
	}
}
