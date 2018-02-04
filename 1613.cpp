#include <cstdio>
#include <algorithm>
#define INF 98765432
using namespace std;

int main(void)
{
    int n, k, s, adj[401][401] = {0};
    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n ;j++)
            if(i!=j)
                adj[i][j] = INF;

    while(k--)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
    }

    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

    scanf("%d", &s);
    while(s--)
    {
        int f, b;
        scanf("%d %d", &f, &b);

        if(adj[f][b] < INF)
            printf("-1\n");
        else if(adj[b][f] < INF)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
