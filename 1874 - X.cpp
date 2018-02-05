#include <cstdio>
#include <cstring>

using namespace std;

// void print_stack(int s[100001], int top)
// {
//     printf("**print_statck**\n");
//     for(int i = top ; i >= 0 ; i--)
//         printf("%d\n", s[i]);
//     printf("\n");
// }
int main(void)
{
    int n, cur, top = 0, charpos = 0, num = 0, first = 1;
    int s[100001] = {0};
    char res[200001] = {0};
    scanf("%d", &n);

    while(n--) // top - 1: 스택 맨 위
    {
        scanf("%d", &cur);
        if(cur < s[top]) //스택 탑이 더크면 끝
        {
            strcpy(res, "NO\n");
            break;
        }

        if(cur > s[top]) //스택 탑이 더 작으면 push
        {
            if(!first)
                top++;

            while(cur != num)
            {
                s[top++] = ++num;
                // printf("push\n");
                print_stack(s, top-1);
                res[charpos++] = '+';
                res[charpos++] = '\n';
            }
            top--;
            first = 0;
        }

        if(cur == s[top]) //스택 탑과 같으면 pop
        {
            top--;
            res[charpos++] = '-';
            res[charpos++] = '\n';
            //printf("pop\n");
            // print_stack(s, top);
        }
    }
    printf("%s", res);

    return 0;
}
