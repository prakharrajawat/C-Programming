#include <stdio.h>

int main()
{

  int i = 0;
  int n;
  printf("value of number is :");

  scanf("%d", &n);

  do
  {
    printf("the number is %d \n", i);
    i++;
  } while (i <= n);

  return 0;
}