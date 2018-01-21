#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
#define INF 11
#define MAX_V 501
using namespace std;

int main(void)
{
    int V, E, start;
    int weight[MAX_V][MAX_V];

    int visited[MAX_V] = {0};
    int dist[MAX_V];
    queue<int> q;
    scanf("%d %d", &V, &E);
    scanf("%d", &start);
    memset(weight, MAX_V*MAX_V, INF);
    memset(dist, MAX_V, INF);
    for(int i = 1 ; i <= E; i++)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        weight[u][v] = w;
    }

    dist[start] = 0;
    q.push(start);

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        visited[cur] = 1;

        for(int i = 1; i <= V; i++)
        {
            if(weight[cur][i] != INF && visited[i] == 0)
            {
                    q.push(i);
                    dist[i] = min(dist[i], dist[cur] + weight[cur][i]);
            }
        }
    }

    for(int i = 1; i <= V; i++)
        printf("%d\n", dist[i]);
    return 0;
}
