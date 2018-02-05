#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    char croa[8][4] = {0};
    char str[101] = {0};
    int idx = 0, res = 0;
    scanf("%s", str);

    strcpy(croa[0], "c=");
    strcpy(croa[1], "c-");
    strcpy(croa[2], "dz=");
    strcpy(croa[3], "d-");
    strcpy(croa[4], "lj");
    strcpy(croa[5], "nj");
    strcpy(croa[6], "s=");
    strcpy(croa[7], "z=");

    while(str[idx] != '\0')
    {
        int match = 0;
        for(int i = 0 ; i < 8 ; i++)
        {
            if(!(strncmp(str+idx, croa[i], strlen(croa[i]))))
            {
                idx += strlen(croa[i]);
                match = 1;
                break;
            }
        }

        if(!match)
            idx++;

        res++;
    }
    printf("%d\n", res);
    return 0;
}
