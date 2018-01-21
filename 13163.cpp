#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
	int N;
	char name[101];

	cin >> N;
	getchar();

	while(N--)
	{
		cin.getline(name, 101);

		char* token = NULL;
		token = strtok(name, " ");
		char god_name[101] = "god";

		while(token != NULL)
		{
			token = strtok(NULL, " ");
			if(token != NULL)
				strcat(god_name, token);
		}

		cout << god_name << endl;
	}

	return 0;
}
