#include <cstdio>

int main(void)
{
    int n, max = 0, scores[1000]={0};
    double sum = 0, new_scores[1000]={0};
    
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &scores[i]);
        if(max < scores[i])
            max = scores[i];
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        new_scores[i] = (double)scores[i]/max*100;
        sum+=new_scores[i];
    }
    printf("%.2f\n", sum/n);
    
    return 0;
}
