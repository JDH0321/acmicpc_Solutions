#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> cl[501];
vector<int> time;
vector<int> res;

void dfs(int, int);
int main(void)
{
    int N;
    queue<int> start_bd;
    scanf("%d", &N);

    time.resize(N+1); res.resize(N+1);

    for(int i = 1 ; i <= N; i++)
    {
        int pre;
        scanf("%d", &time[i]);
        scanf("%d", &pre);
        if(pre == -1)
        {
            start_bd.push(i);
        }
        else
        {
            while(pre != -1)
            {
                cl[pre].push_back(i);
                scanf("%d", &pre);
            }
        }
    }

    while(!start_bd.empty())
    {
        int start = start_bd.front();
        start_bd.pop();
        dfs(0, start);
    }

    for(int i = 1 ; i <= N; i++)
        printf("%d\n", res[i]);

    return 0;
}

void dfs(int totalTime, int BD)
{
    res[BD] = max(res[BD], totalTime + time[BD]);
    int len = cl[BD].size();
    for(int i = 0 ; i < len ; i++)
        dfs(res[BD], cl[BD][i]);
}
