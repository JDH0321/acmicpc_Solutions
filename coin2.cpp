#include <stdio.h>
#define MAX_N 101
#define MAX_K 10001
#define MIN(A,B) A>B?B:A
int main(void)
{
		
	int D[MAX_K] = { 0 };
	int coin[MAX_N] = { 0 };
	int n ,k;
	int result = -1;
	scanf("%d %d", &n, &k);	
	
	for(int i = 1 ; i <= n ; i++)
		scanf("%d", &coin[i]);

	for(int i = 1 ; i <= k ; i++)
		D[i] = 987654321;
	
	for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j <= k ; j++)
			if( j >= coin[i])
				D[j] = MIN(D[j], D[j-coin[i]] + 1);
	
	
	if(D[k] != 987654321)
		result = D[k];

	printf("%d\n", result);
	
	return 0;
}
