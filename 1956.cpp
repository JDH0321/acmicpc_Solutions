#include <cstdio>
#include <algorithm>
#define INF 98765432

using namespace std;

int main(void)
{
    int V, E, res = 987654321, adj[401][401] = {0};
    scanf("%d %d", &V, &E);

    for(int i = 1 ; i <= V ; i++)
        for(int j = 1 ; j <= V ; j++)
            adj[i][j] = INF;
    while(E--)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        adj[u][v] = w;
    }

    for(int k = 1 ; k <= V ; k++)
        for(int i = 1; i <= V ; i++)
            for(int j = 1; j <= V; j++)
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

    for(int i = 1; i <= V; i++)
        res = min(res, adj[i][i]);

    if(res == INF)
        printf("-1\n");
    else
        printf("%d\n", res);
    return 0;
}
