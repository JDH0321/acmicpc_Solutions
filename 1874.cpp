#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    int num = 1;
    char res[200001] = {0};
    scanf("%d", &n);
    vector<int> na(n+1); // 수열
    vector<int> enter(n+1);
    for(int i = 1 ; i <= n; i++)
        scanf("%d", &na[i]);

    // na[i]가 enter.back()보다 작으면 pop
    // 크면 push -> num++

    for(int i = 1 ; i <= n ; i++)
    {
        if(na[i] == enter.back())
        {
            enter.pop();
            sprintf(res, "%s%s", "-\n")
        }
        else if(na[i] > )
    }
    return 0;
}
