#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int bfs(vector<int>*, int, vector<int>&);
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    vector<int> adj[n+1];
    vector<int> hack_cnt(n+1);
    while(m--)
    {
        int u, v;
        scanf("%d %d", &v, &u);
        adj[u].push_back(v);
    }

    for(int i = 1 ; i <= n ; i++)
    {
        if(!adj[i].empty())
        {
            vector<int> visited(n+1);
            hack_cnt[i] = bfs(adj, i, visited);
        }
    }

    vector<int> temp(n+1);
    temp = hack_cnt;
    sort(temp.begin(), temp.end());
    int top = temp[n];

    for(int i = 1 ; i <= n ; i++)
        if(hack_cnt[i] == top)
            printf("%d ", i);
    puts("");
    return 0;
}

int bfs(vector<int>* adj, int u, vector<int> &visited)
{
    int cnt = 1;
    queue<int> q;
    q.push(u);
    visited[u] = 1;

    while(!q.empty())
    {
        int cur = q.front();
        q.pop();

        for(int i = 0 ; i < adj[cur].size() ; i++)
        {
            if(!visited[adj[cur][i]])
            {
                q.push(adj[cur][i]);
                visited[adj[cur][i]] = 1;
                cnt++;
            }
        }
    }
    return cnt;
}
