#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int dfs(int, int, int[][102], pair<int, int>);

int main(void)
{
	int m, n, k, map[102][102] = {0};
	vector<int> area;
	scanf("%d %d %d", &m, &n, &k); // m:세로 n:가로 // 인덱스는 -1 
	
	 
	while(k--)
	{
		int x0, y0, x1, y1;
		scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
		
		for(int i = y0 ; i < y1 ; i++)
			for(int j = x0 ; j < x1 ; j++)
				 map[i][j] = 1;
	}
	
	for(int i = 0 ; i < m ; i++)
		for(int j = 0 ; j < n ; j++)	
			if(!map[i][j])
				area.push_back(dfs(m, n, map, make_pair(i, j)));
			
	sort(area.begin(), area.end());
	printf("%d\n", area.size());
	for(int i = 0 ; i < area.size() ; i++)
		printf("%d ", area[i]);
    return 0;
}

int dfs(int m, int n, int map[][102], pair<int, int> pos)
{
	int cnt = 1, y = pos.first, x = pos.second;
	int dy[4] = {1, 0, -1, 0};
	int dx[4] = {0, 1, 0, -1};
	
	map[y][x] = 1;
	
	for(int d = 0 ; d < 4 ; d++)
		if(y + dy[d] < m && x + dx[d] < n && y + dy[d] >= 0 && x + dx[d] >= 0 && !map[y + dy[d]][x + dx[d]])
			cnt += dfs(m, n, map,  make_pair(y + dy[d], x + dx[d]));
	
	return cnt;
}
