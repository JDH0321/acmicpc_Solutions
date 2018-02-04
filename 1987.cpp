#include <cstdio>
#include <vector>

using namespace std;

int dfs(char[][20], pair<int, int>, vector<int>, int, int, int);
int res = 0;
int main(void)
{
	int r, c;
	char map[20][20] = {0};
	
	scanf("%d %d", &r, &c);
	getchar();
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c ; j++)
			scanf("%c", &map[i][j]);
		getchar();
	}
	
	vector<int> v(26);
	dfs(map, make_pair(0,0), v, r, c, 1);
	printf("%d\n", res);
	return 0;
}

int dfs(char map[][20], pair<int, int> pos, vector<int> check, int r, int c, int depth)
{
	if(res < depth)
		res = depth;
	
	int y = pos.first, x = pos.second;
	vector<int> v = check;
	v[map[y][x] - 'A'] = 1;
	int dy[4] = {1, 0, -1, 0};
	int dx[4] = {0, 1, 0, -1};
	
	for(int i = 0 ; i < 4; i++)
	{
		int next_y = y + dy[i], next_x = x + dx[i];
		if(next_y >= 0 && next_y < r && next_x >= 0 && next_x < c
		&& !v[map[next_y][next_x] - 'A'])
			dfs(map, make_pair(next_y, next_x), v, r, c, depth+1);
	}
}
