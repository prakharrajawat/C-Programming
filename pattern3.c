#include <stdio.h>

int main()
{

  int i, b, a, n;

  scanf("%d", &i);
  n = i;

  while (i--)
  {
    b = n - i - 1;
    while (b--)
    {
      printf(".");
    }
    a = i + 1;
    while (a--)
    {
      printf("*");
    }

    printf("\n");
  }
}