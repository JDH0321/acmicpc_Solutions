#include <cstdio>

int main(void)
{
    char a = getchar();
    while(a != EOF)
    {
        printf("%c", a);
        a = getchar();
    }
    return 0;
}
