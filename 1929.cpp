#include <cstdio>
using namespace std;

int main(void)
{
    int m, n, prime[1000001] = {0};
    scanf("%d %d", &m, &n);
    prime[1] = 1; // 소수 아닌 애 : 1

    for(int i = 2;  i <= n ; i++)
        if(!prime[i])
            for(int j = 2 ; i*j <= n ; j++)
                prime[i*j] = 1;

    for(int i = m ; i <= n ; i++)
        if(!prime[i])
            printf("%d\n",i);
    return 0;
}
