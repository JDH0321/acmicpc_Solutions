#include <iostream>
#include <cstdio>
using namespace std;

int travel(int, int, int[][502], int[][502]);

int main(void)
{
  int M,N;
  int map[502][502] = {0};
  int D[502][502] = {0};

  scanf("%d %d", &M, &N);

  for(int i = 0 ; i <= 501 ; i++)
    for(int j = 0 ; j <= 501 ; j++)
      map[i][j] = 10001;

  for(int i = 1 ; i <= M ; i++)
    for(int j = 1 ; j <= N ; j++)
      scanf("%d", &map[i][j]);

  D[1][1] = 1;

  for(int i = 1 ; i <= M ; i++)
    for(int j = 1 ; j <= N ; j++)
    {
      if(i == 1 && j == 1)
        continue;
      D[i][j] = travel(i, j, map, D);
    }

  printf("%d\n", D[M][N]);
  return 0;
}

int travel(int y, int x, int map[][502], int D[][502])
{
  if(map[y][x] > map[y-1][x])
    D[y][x] += D[y-1][x];
  if(map[y][x] > map[y][x-1])
    D[y][x] += D[y][x-1];
  if(map[y][x] > map[y+1][x])
    D[y][x] += travel(y+1, x, map, D);
  if(map[y][x] > map[y][x])
    D[y][x] += travel(y, x+1, map, D);
}
