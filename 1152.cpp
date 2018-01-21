#include <iostream>
#include <string.h>
#include <string>

using namespace std; 

int main(void)
{
	char str[1000000];
	int count = 0;

	cin.getline(str, 1000000);
	
	char *token = strtok(str, " ");
	while(token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}
	cout<<count<<endl;
	return 0;
}
