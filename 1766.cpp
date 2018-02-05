#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

vector<int> solve(int, vector<int>*, vector<int>);

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> adj[n+1];
    vector<int> degree(n+1);

    while(m--)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        degree[v]++;
    }

    vector<int> res = solve(n, adj, degree);
    for(int i = 0 ; i < res.size(); i++)
        printf("%d ", res[i]);
    puts("");

    return 0;
}

vector<int> solve(int n, vector<int>* adj, vector<int> degree)
{
    vector<int> res;
    priority_queue<int> pq;

    for(int i = 1 ; i <= n ; i++)
        if(!degree[i])
            pq.push(-i); //쉬운 문제부터..

    while(!pq.empty())
    {
        int cur_prob = -pq.top();
        pq.pop();
        res.push_back(cur_prob);
        for(int i = 0 ; i < adj[cur_prob].size() ; i++)
        {
            int next_prob = adj[cur_prob][i];
            degree[next_prob]--;
            if(!degree[next_prob])
                pq.push(-next_prob);
        }
    }
    return res;
}
