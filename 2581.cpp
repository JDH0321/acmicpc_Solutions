#include <cstdio>
#include <algorithm>
using namespace std;

int main(void)
{
    int m, n, sum = 0, min = 10001, prime[10001] = {0};

    fill(prime+2, prime+10001, 1);

    for(int i = 2 ; i <= 10000 ; i++)
        if(prime[i])
            for(int j = 2 ; i*j <= 10000 ; j++)
                prime[i*j] = 0;

    scanf("%d %d", &m, &n);

    for(int i = m ; i <= n ; i++)
    {
        if(prime[i])
        {
            sum += i;
            if(i < min)
                min = i;
        }
    }

    if(!sum)
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, min);
    return 0;
}
