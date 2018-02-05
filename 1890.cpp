#include <cstdio>
#include <utility>

using namespace std;

long long D[101][101] = {0};

void solve(int, int[][101]);
int main(void)
{
    int N, map[101][101] = {0};
    scanf("%d", &N);

    for(int i = 1; i <= N ; i++)
        for(int j = 1; j <= N; j++)
            scanf("%d", &map[i][j]);

    solve(N, map);

    printf("%lld\n", D[N][N]);
    return 0;
}

void solve(int n, int map[][101])
{
    //map[y][x] == 0 이면 이동X
    int jump = map[1][1];
    if(!jump)
        return;

    D[1][1] = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n ; j++)
        {
            int jump = map[i][j];
            if(!jump)
                continue;

            if(j + jump <= n)
                D[i][j + jump] += D[i][j];
            if(i + jump <= n)
                D[i + jump][j] += D[i][j];
        }
    }
}
