#include <cstdio>
#include <cstring>
int main(void)
{
    int N, input, res = 0, prime[1001] = {0};

    memset(prime+2, 1, 999);
    for(int i = 2 ; i <= 1000 ; i++)
        if(prime[i])
            for(int j = 2 ; i*j <= 1000 ; j++)
                prime[i*j] = 0;

    scanf("%d", &N);
    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d", &input);
        if(prime[input])
            res++;
    }
    printf("%d\n", res);
    return 0;
}
