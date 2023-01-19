#include <stdio.h>

void main()
{

  int n;

  printf("enter a no:");
  scanf("%d", &n);

  if (n % 97 == 0)
    printf("it is divisible");

  else
  {
    printf("it is not divisible");
  }
}
