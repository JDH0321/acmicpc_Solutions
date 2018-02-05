#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

const int y_dir[4] = {-1, 0 , 1, 0};
const int x_dir[4] = {0, 1, 0, -1};

int Jangma(int,int[][101]);
int Bfs(int, int[][101], int[][101]);
int main(void)
{
  int N;
  int map[101][101] = {0};
  scanf("%d",&N);

  for(int i = 1 ; i <= N; i++)
    for(int j = 1; j <= N ; j++)
      scanf("%d", &map[i][j]);

  printf("%d", Jangma(N, map));
  return 0;
}

int Jangma(int N, int map[][101])
{
  struct pos{
    int y;
    int x;
  };
  int max_area = -1;
  int visited[101][101] = {0};
  //비의 양 : 2 ~ N-1

  for(int rain = 2 ; rain < N ; rain++)
  {
    int visited[101][101] = {0};
    for(int i = 1; i <= N ; i++)
    {
      for(int j = 1 ; j<= N ; j++)
      {
        
      }
    }
  }

  return max_area;
}

int Bfs(int N, int map[][101], int visited[][101])
{

}
