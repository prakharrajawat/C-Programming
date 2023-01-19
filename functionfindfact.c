#include <stdio.h>
float Findfact(int n);

void main()
{
  int num;
  printf("enter a positive no:");
  scanf("%d", &num);
  printf("%.1f", Findfact(num));
}

float Findfact(int n)
{
  int i, fact = 1;

  for (i = 1; i <= n; i++)

    fact = fact * i;
  return fact;
}