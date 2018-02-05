#include <cstdio>
#include <algorithm>
#include <vector>
#define INF 9999999

using namespace std;

int main(void)
{
    int n, e, adj[801][801] = {0};
    scanf("%d %d", &n, &e);

    for(int i = 0 ; i < 801; i++)
        for(int j = 0 ; j < 801; j++)
            if(i != j)
                adj[i][j] = INF;

    while(e--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        adj[a][b] = c;
        adj[b][a] = c;
    }

    int mustA, mustB;
    scanf("%d %d", &mustA, &mustB);

    for(int k = 1 ; k <= n ; k++)
        for(int i = 1; i <= n ; i++)
            for(int j = 1; j <= n ; j++)
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

    int res = min(adj[1][mustA] + adj[mustA][mustB] + adj[mustB][n],
    adj[1][mustB] + adj[mustB][mustA] + adj[mustA][n]);

    if(res >= INF)
        printf("-1\n");
    else
        printf("%d\n", res);

    return 0;
}
