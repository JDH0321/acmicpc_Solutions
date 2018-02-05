#include <utility>
#include <vector>
#include <queue>
#include <cstdio>

using namespace std;

long long dijk(vector<pair<int, int> >*, int, int, int);

int main(void)
{
    int n, m, start, end;
    scanf("%d %d", &n, &m); //n : 도시개수 , m : 버스노선개수

    vector<pair<int, int> > graph[n+1];

    while(m--)
    {
        int u, v, cost;
        scanf("%d %d %d", &u, &v, &cost); // 출발, 도착, 비용

        graph[u].push_back(make_pair(v, cost));
    }

    scanf("%d %d", &start, &end);

    printf("%lld\n", dijk(graph, n, start, end));
    return 0;
}

long long dijk(vector<pair<int, int> >* graph, int n, int start, int end)
{
    vector<long long> dist(n+1, 987654321);
    vector<int> visited(n+1, 0);
    priority_queue<pair<int, int> > pq; //cost, v순

    pq.push(make_pair(0, start));
    dist[start] = 0;

    while(!pq.empty())
    {
        int cur = pq.top().second;
        pq.pop();
        visited[cur] = 1;

        //인접해 있으면서 방문하지않은 노드들의 거리를 갱신
        int len = graph[cur].size();
        for(int i = 0 ; i < len ; i++)
        {
            int next = graph[cur][i].first;
            int cost = graph[cur][i].second;

            if(!visited[next] && dist[next] > dist[cur] + cost)
            {
                dist[next] = (long long)(dist[cur] + cost);
                pq.push(make_pair(-dist[next], next));
            }
        }
    }

    return dist[end];
}
