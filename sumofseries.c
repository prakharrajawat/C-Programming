#include <stdio.h>
void main()
{

  int i, sum = 0, n;

  printf("enter no:");
  scanf("%d", &n);

  for (i = 1; i <= n; i = i + 1)
  {
    if (i % 2 == 0)
      sum = sum - i;
    else
      sum = sum + i;
  }

  printf("sum of n numbers of series (1-2+3-4) is : %d", sum);
}
