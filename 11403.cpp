#include <cstdio>
#include <vector>
#include <utility>

using namespace std;

void solve(int[][102], int[][102], int, int, int);
int start;

int main(void)
{
    int N;
    int map[102][102] = {0};
    int res[102][102] = {0};
    scanf("%d", &N);

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1 ; j <= N ; j++)
            scanf("%d", &map[i][j]);

    for(int i = 1 ; i <= N ; i++)
        for(int j = 1; j <= N ; j++)
            if(map[i][j])
            {
                start = i;
                solve(map, res, N, i, j);
            }

    //
    // for(int i = 1 ; i <= N ; i++)
    // {
    //     for(int j = 1 ; j <= N ; j++)
    //         printf("%d ", res[i][j]);
    //     printf("\n");
    // }
    return 0;
}

void solve(int map[][102], int res[][102], int N, int u, int v)
{
    printf("%d -> %d \n", u, v);
    res[u][v] = 1;
    if(v == start)
        return;
    for(int i = 1 ; i <= N ; i++)
    {
        if(map[v][i])
            solve(map, res, N, v, i);
    }
}
