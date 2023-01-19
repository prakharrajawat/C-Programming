#include <stdio.h>
int main()
{

  float i, n, sum = 0.0;

  printf("enter no:");
  scanf("%d", &n);

  for (i = 2; i <= n + 1; i++)
  {
    sum = sum + 1 / i;
  }

  printf("sum of %f", sum);
  return 0;
}