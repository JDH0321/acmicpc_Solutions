#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
    int res = 0;
    char str[16];
    scanf("%s", str);

    for(int i = 0 ; i < strlen(str) ; i++)
    {
        if(str[i] <= 'C')
            res += 3;
        else if(str[i] <= 'F')
            res += 4;
        else if(str[i] <= 'I')
            res += 5;
        else if(str[i] <= 'L')
            res += 6;
        else if(str[i] <= 'O')
            res += 7;
        else if(str[i] <= 'S')
            res += 8;
        else if(str[i] <= 'V')
            res += 9;
        else if(str[i] <= 'Z')
            res += 10;
    }

    printf("%d\n", res);
    return 0;
}
