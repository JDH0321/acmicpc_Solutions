#include <cstdio>

int main(void)
{
    int cnt = 0, max = 0, apb[26] = {0};

    char c = getchar();
    while(c != EOF)
    {
        if('A' <= c && c <= 'Z')
            apb[c-'A']++;
        else
            apb[c-'a']++;

        c = getchar();
    }

    for(int i = 0 ; i < 26 ; i++)
    {
        if(max < apb[i])
        {
            max = apb[i];
            c = (char)('A' + i);
        }
    }

    for(int i = 0 ; i < 26 ; i++)
        if(max == apb[i])
            cnt++;

    if(cnt > 1)
        printf("?\n");
    else
        printf("%c\n", c);
    return 0;
}
