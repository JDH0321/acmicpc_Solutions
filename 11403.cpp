#include <cstdio>
#include <algorithm>
#define INF 987654
using namespace std;

int main(void)
{
    int n, adj[101][101];
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            int con; // 0 or 1
            scanf("%d", &con);

            if(!con) //0
                adj[i][j] = INF;
            else
                adj[i][j] = 1;
        }
    }

    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(adj[i][j] == INF)
                printf("0 ");
            else
                printf("1 ");
        }
        puts("");
    }

    return 0;
}
