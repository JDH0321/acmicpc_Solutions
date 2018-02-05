#include <cstdio>
#include <cstdlib>
using namespace std;

int main(void)
{
    char num[2][4] = {0};
    scanf("%s %s", num[0], num[1]);

    for(int i = 0 ; i <= 1; i++)
    {
        char temp = num[i][0];
        num[i][0] = num[i][2];
        num[i][2] = temp;
    }

    if(atoi(num[0]) > atoi(num[1]))
        printf("%s\n", num[0]);
    else
        printf("%s\n", num[1]);

    return 0;
}
