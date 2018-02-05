#include <cstdio>
#include <cstdlib>
using namespace std;

void solve(int[][2200], int, int, int);
int check(int[][2200], int, int, int);

int minus_one = 0;
int zero = 0;
int one = 0;

int main(void)
{
    int n, map[2200][2200] = {0};
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &map[i][j]);

    solve(map, n, 0, 0);

    printf("%d\n%d\n%d\n", minus_one, zero, one);
    return 0;
}

void solve(int map[][2200], int size, int y, int x)
{
    if(!size)
        return;

    int check_map = check(map, size, y, x);

    if(check_map == -1)
        minus_one++;
    else if(check_map == 0)
        zero++;
    else if(check_map == 1)
        one++;
    else // 999..다른부분이 있음
    {
        solve(map, size/3, y, x);
        solve(map, size/3, y, x + size/3);
        solve(map, size/3, y, x + size/3*2);
        solve(map, size/3, y + size/3, x);
        solve(map, size/3, y + size/3, x + size/3);
        solve(map, size/3, y + size/3, x + size/3*2);
        solve(map, size/3, y + size/3*2, x);
        solve(map, size/3, y + size/3*2, x + size/3);
        solve(map, size/3, y + size/3*2, x + size/3*2);
    }
}

int check(int map[][2200], int size, int y, int x)
{
    for(int i = y ; i < y + size ; i++)
        for(int j = x ; j < x + size ; j++)
            if(map[y][x] != map[i][j])
                return 999;

    return map[y][x];
}
