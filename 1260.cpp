#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v;
int visit_d[1001] = { 0 }; //1:visited
int visit_b[1001] = { 0 }; //1:visited
int map[1001][1001] = { 0 };

void DFS(int, int);
void BFS(int, int);

int main(void)
{
	int n, m, start;
	cin >> n >> m >> start;

	for (int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}
	

	v.push_back(start);
	visit_d[start] = 1;
	DFS(start, n);

	cout << endl;
	
	BFS(start, n);

	return 0;
}

void DFS(int ver, int nc)
{
	if (!v.size())
		return;

	int cur = v.back();
	v.pop_back();

	cout << cur << " ";

	for (int i = 1; i <= nc; i++)
	{
		if (map[cur][i] == 1 && visit_d[i] != 1)
		{
			visit_d[i] = 1;
			v.push_back(i);
			DFS(i, nc);
		}
	}
	
}

void BFS(int ver, int nc)
{
	queue<int> q;
	
	q.push(ver);
	visit_b[ver] = 1;

	while (q.size())
	{
		int cur = q.front();
		q.pop();

		cout << cur << " ";
		
		for (int i = 1; i <= nc; i++)
		{
			if (map[cur][i] == 1 && visit_b[i] != 1)
			{
				q.push(i);
				visit_b[i] = 1;
			}
		}
	}
}
