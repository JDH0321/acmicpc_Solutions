#include <stdio.h>

int main(void)
{
    int numb[100001] = {0};

    numb[100000] = 1;
    printf("%d\n", numb[100000]);
    return 0;
}
