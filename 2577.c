#include <stdio.h>
#include <string.h>
int main(void)
{
  int a, b, c, len, i;
  int res[10] = {0};
  char abc[12] = {0};

  scanf("%d %d %d", &a, &b, &c);
  sprintf(abc, "%d", a*b*c);

  len = strlen(abc);
  printf("len : %d\n", len);
  for(i = 0 ; i < len ; i++)
    res[abc[i]]++;

  for(i = 0 ; i < 10 ; i ++)
    printf("%d\n", res[i]);

  return 0;
}
