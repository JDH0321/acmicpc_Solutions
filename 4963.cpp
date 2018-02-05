#include <cstdio>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void bfs(int, int, int[][50], int[][50], pair<int, int>);
int main(void)
{
    vector<int> results;
    while(1)
    {
        int w, h, res = 0, map[50][50] = {0};
        int visited[50][50] = {0};
        scanf("%d %d", &w, &h);
        if(!(w && h))
            break;

        for(int i = 0 ; i < h ; i++)
            for(int j = 0 ; j < w ; j++)
                scanf("%d", &map[i][j]);

        for(int i = 0 ; i < h ; i++)
        {
             for(int j = 0 ; j < w ; j++)
             {
                 if(map[i][j] && !visited[i][j])
                 {
                     bfs(w, h, map, visited, make_pair(i, j));
                     res++;
                 }
             }
        }
        results.push_back(res);
    }

    for(int i = 0 ; i < results.size() ; i++)
        printf("%d\n", results[i]);
    return 0;
}

void bfs(int w, int h, int map[][50], int visited[][50], pair<int, int> p)
{
    int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    queue<pair<int, int> > q;
    q.push(p);
    visited[p.first][p.second] = 1;

    while(!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for(int i = 0 ; i < 8 ; i++)
        {
            int next_y = cur.first + dy[i];
            int next_x = cur.second + dx[i];

            if(0 <= next_y && next_y < h && 0 <= next_x && next_x < w
                && map[next_y][next_x] && !visited[next_y][next_x])
                {
                    q.push(make_pair(next_y, next_x));
                    visited[next_y][next_x] = 1;
                }
        }
    }
}
