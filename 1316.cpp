#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    int n, res;
    char str[101] = {0};
    scanf("%d", &n);
    res = n;

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s", str);
        for(int i = 0 ; i < strlen(str) ; i++)
        {
            int can = 1;
            for(int j = i+1 ; j < strlen(str) ; j++)
            {
                if(str[i] == str[j])
                {
                    if(str[i] != str[j-1])
                    {
                        res--;
                        can = 0;
                        break;
                    }
                }
            }
            if(!can)
                break;
        }

    }

    printf("%d\n", res);
    return 0;
}
