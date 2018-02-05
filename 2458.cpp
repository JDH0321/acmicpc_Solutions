#include <cstdio>
#include <algorithm>
#define INF 98765432
using namespace std;

int main(void)
{
    int n, m, res = 0, adj[501][501] = {0};
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n ; i++)
        for(int j = 1; j <= n; j++)
            if(i!=j)
                adj[i][j] = INF;

    while(m--)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
    }

    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                adj[i][j] = min(adj[i][j], adj[i][k]+adj[k][j]);

    for(int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for(int j = 1; j <= n; j++)
        {
            printf("%d ", adj[i][j]);
            if(i == j)
                continue;

            if(adj[i][j] < INF || adj[j][i] < INF)
                cnt++;
        }
        if(cnt == n-1)
            res++;

        puts("");
    }

    printf("%d\n", res);
    return 0;
}
