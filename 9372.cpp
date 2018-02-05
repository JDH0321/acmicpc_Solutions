#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

int solve(int, int[][1001]);

int main(void)
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int n, m, adj[1001][1001] = {0};
        scanf("%d %d", &n, &m);

        while(m--)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            adj[u][v] = 1;
            adj[v][u] = 1;
        }

        printf("%d\n", solve(n, adj));
    }
    return 0;
}

int solve(int n, int adj[][1001])
{
    int res = 0;
    queue<int> q;
    vector<int> visited(n+1);

    q.push(1);
    visited[1] = 1;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(int i = 1; i <= n; i++)
        {
            if(!visited[i] && adj[cur][i])
            {
                res++;
                visited[i] = 1;
                q.push(i);
            }
        }
    }

    return res;
}
