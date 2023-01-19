// program to check whether a given no. is prime or not using for loop
#include <stdio.h>

void main()
{

  int num, i, f = 0;
  printf("enter a number:");
  scanf("%d", &num);

  for (i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      printf("not a prime number ");
      f++;
    }
  }
  if (f == 0)

  {

    printf(" prime number");
  }
}