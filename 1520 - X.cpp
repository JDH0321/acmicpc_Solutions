#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int cache[510][510], arr[510][510];
int dy[4] = {0,-1,0,1};
int dx[4] = {-1,0,1,0};
int n;

int go(int y, int x) {

   int &ret = cache[y][x];
   if (ret != -1) return ret;
   ret = 1;

   for (int i = 0; i < 4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny >= 1 && ny <= n && nx >= 1 && nx <= n && arr[ny][nx] == arr[y][x] + 1) {
         ret = max(ret, go(ny, nx) + 1);
      }
   }

   return ret;
}

int main(void)
{
    int N, M;
    scanf("%d %d", &M, &N);

    for(int i = 1; i <= M ; i++)
        for(int j = 1 ; j <= N ; j++)
            scanf("%d", &arr[i][j]);

    memset(cache, sizeof(cache), -1);

    go(M, N);
    printf("%d\n", cache[M][N]);
    return 0;
}
