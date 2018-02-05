#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

struct pos{
    int y;
    int x;
};

int Jangma(int, int, int[][100]);
void Bfs(int, int ,int[][100], int[][100], pos);

int main(void)
{
    int N, highest = 0;
    int map[100][100] = {0};
    scanf("%d", &N);

    for(int i = 0 ; i < N; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            scanf("%d", &map[i][j]);
            highest = max(highest, map[i][j]);
        }
    }
    printf("%d\n", Jangma(N, highest, map));
    return 0;
}

int Jangma(int N, int highest, int map[][100])
{
    int max_area = 0;

    //비의 양 : 1 ~ highest-1
    for(int rain = 0 ; rain < highest ; rain++)
    {
        int visited[100][100] = {0};
        int area = 0;
        for(int i = 0; i < N ; i++)
        {
            for(int j = 0 ; j < N ; j++)
            {
                if(!visited[i][j] && map[i][j] > rain)
                {
                    pos p = {i, j};
                    Bfs(N, rain, map, visited, p);
                    area++;
                }
            }
        }
        max_area = max(max_area, area);
    }

    return max_area;
}

void Bfs(int N, int rain, int map[][100], int visited[][100], pos p)
{
    const int y_dir[4] = {1, 0, -1, 0};
    const int x_dir[4] = {0, 1, 0, -1};

    queue<pos> q;
    q.push(p);
    visited[p.y][p.x] = 1;

    while(!q.empty())
    {
        pos cur_pos = q.front();
        q.pop();

        for(int i = 0 ; i < 4 ; i++)
        {
            int next_y = cur_pos.y + y_dir[i];
            int next_x = cur_pos.x + x_dir[i];

            if(0 <= next_y && next_y < N && 0 <= next_x && next_x < N
            && !visited[next_y][next_x] && map[next_y][next_x] > rain)
            {
                pos next_pos = {next_y, next_x};
                q.push(next_pos);
                visited[next_y][next_x] = 1;
            }
        }
    }
}
