#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

const int y_dir[4] = { 1, 0, -1, 0 };
const int x_dir[4] = { 0, 1, 0, -1 };

struct pos
{
  int z;
	int y;
	int x;
};

int tomatoes(int[][101][101], int[][101][101], queue<pos>&);

int main(void)
{
	int box[101][101][101] = { 0 };
	int visited[101][101][101] = { 0 };
	int M, N, H, anik_tomato = 0, empty = 0;
	queue<pos> q;

	cin >> M >> N >> H;

  for(int z = 0 ; z < 101 ; z++)
	 for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			visited[z][i][j] = 1;

  for(int z = 1 ; z <= H ; z++)
  {
    for (int i = 1; i <= N; i++)
  	{
  		for (int j = 1; j <= M; j++)
  		{
  			cin >> box[z][i][j];
  			if (box[z][i][j] == 1)
  			{
  				pos p = { z, i, j };
  				q.push(p);
  			}
  			else if (box[z][i][j] == 0)
  			{
  				anik_tomato += 1;
  				visited[z][i][j] = -1;
  			}
  			else
  				empty += 1;
  		}
  	}
  }

	if (anik_tomato == 0 && empty != M*N*H)
		printf("0\n");
	else
	{
		int result = tomatoes(box, visited, q);
		int cannot = 0;

    for(int z = 1 ; z <= H ; z++)
    {
      for (int i = 1; i <= N; i++)
  		{
  			for (int j = 1; j <= M; j++)
  			{
  				if (visited[z][i][j] == -1)
  				{
  					cannot = 1;
  					break;
  				}
  			}
  			if (cannot)
  				break;
  		}
    }

  		if (cannot)
  			printf("-1\n");
  		else
  			printf("%d\n", result);
	}

	return 0;
}

int tomatoes(int box[][101][101], int visited[][101][101], queue<pos> &q)
{
	int res = 0;

	while (q.size())
	{
		int cnt = q.size();
		for (int i = 0; i < cnt; i++)
		{
			pos ctp = q.front(); //current_tomato_pos
			q.pop();
			for (int z = 0; z < 4; z++)
			{
				if (box[ctp.z][ctp.y + y_dir[z]][ctp.x + x_dir[z]] == 0 &&
					visited[ctp.z][ctp.y + y_dir[z]][ctp.x + x_dir[z]] == -1)
				{
					pos ntp = { ctp.z, ctp.y + y_dir[z], ctp.x + x_dir[z] }; // next_t_p
					q.push(ntp);
					visited[ntp.z][ntp.y][ntp.x] = 1;
				}
			}
      if (box[ctp.z - 1][ctp.y][ctp.x] == 0 &&
        visited[ctp.z - 1][ctp.y][ctp.x] == -1)
      {
        pos ntp = { ctp.z - 1, ctp.y, ctp.x}; // next_t_p
        q.push(ntp);
        visited[ntp.z][ntp.y][ntp.x] = 1;
      }
      if (box[ctp.z + 1][ctp.y][ctp.x] == 0 &&
        visited[ctp.z + 1][ctp.y][ctp.x] == -1)
      {
        pos ntp = { ctp.z + 1, ctp.y, ctp.x}; // next_t_p
        q.push(ntp);
        visited[ntp.z][ntp.y][ntp.x] = 1;
      }
		}
		if(q.size() != 0)
			res++;
	}


	return res;
}
