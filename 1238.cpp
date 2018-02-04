#include <cstdio>
#include <algorithm>
#define INF 98765432

using namespace std;

int main(void)
{
    int N, M, X, res = 0, adj[1001][1001] = {0};
    scanf("%d %d %d", &N, &M, &X);

    for(int i = 1; i <= N ; i++)
        for(int j = 1; j <= N; j++)
            if(i!=j)
                adj[i][j] = INF;

    while(M--)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);

        adj[u][v] = w;
    }

    for(int k = 1; k <= N ;k++)
        for(int i = 1; i <= N; i++)
            for(int j = 1; j <= N; j++)
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

    for(int i = 1; i <= N ; i++)
    {
        int time = adj[i][X] + adj[X][i];
        res = max(res, time);
    }

    printf("%d\n", res);
    return 0;
}
