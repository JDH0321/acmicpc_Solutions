#include <cstdio>
#include <algorithm>
#include <vector>
#define INF 987654
using namespace std;

int main(void)
{
    int V, E, K;
    scanf("%d %d %d", &V, &E, &K);

    vector<vector<int> > adj(V+1, vector<int>(V+1, 0));

    for(int i = 1 ; i <= V ; i++)
        for(int j = 1 ; j <= V ; j++)
            if(i != j)
                adj[i][j] = INF;

    while(E--)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        adj[u][v] = w;
    }

    for(int k = 1; k <= V; k++)
        for(int i = 1; i <= V; i++)
            for(int j = 1; j <= V; j++)
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);


    for(int i = 1; i <= V; i++)
    {
        if(adj[K][i] >= INF)
            printf("INF\n");
        else
            printf("%d\n", adj[K][i]);
    }
    return 0;
}
