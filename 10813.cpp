#include <iostream>

using namespace std;

int main(void)
{
	int N, M, i, j;
	cin >> N >> M;
	
	int* basket = new int [N+1];

	for(int i = 1 ; i <= N ; i++)
		basket[i] = i;

	while(M--)
	{
		cin >> i >> j;
		swap(basket[i], basket[j]);
	}

	for(int i = 1 ; i <= N ; i++)
		cout << basket[i] << " ";
	cout<<endl;
	delete [] basket;
	return 0;
}
