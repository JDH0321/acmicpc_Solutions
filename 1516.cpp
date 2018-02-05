#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    vector<vector<int> > cl; //인접 리스트
    vector<long long> timeTobuild;
    vector<long long> minTime;
    vector<int> degree;
    queue<int> sq; // 검색큐

    scanf("%d", &N);

    cl.resize(N+1);
    timeTobuild.resize(N+1);
    degree.resize(N+1);
    minTime.resize(N+1);

    for(int i = 1; i <= N; i++)
    {
        long long time;
        scanf("%lld", &time);
        timeTobuild[i] = time;

        int pre_bd;
        scanf("%d", &pre_bd);
        while(pre_bd != -1)
        {
            degree[i]++;
            cl[pre_bd].push_back(i);
            scanf("%d", &pre_bd);
        }
    }

    for(int i = 1; i <= N; i++)
    {
        if(!degree[i]) //0이면
        {
            sq.push(i);
            minTime[i] = timeTobuild[i];
        }
    }

    while(!sq.empty())
    {
        int curBD = sq.front();
        sq.pop();
        for(int i = 0 ; i < cl[curBD].size(); i++) // 이어진 빌딩의 진입차수-1
        {
            degree[cl[curBD][i]]--;
            if(!degree[cl[curBD][i]])
            {
                sq.push(cl[curBD][i]);
            }
            minTime[cl[curBD][i]] = max(minTime[cl[curBD][i]],
                timeTobuild[cl[curBD][i]] + minTime[curBD]);
        }
    }

    for(int i = 1; i <= N ; i++)
        printf("%lld\n", minTime[i]);


    return 0;
}
