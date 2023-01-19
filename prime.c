#include <stdio.h>
#include <conio.h>
int main()
{

  int i, n, count = 0;

  printf("enter a no:");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      count = 1;
    }
  }
  if (count == 0)
  {
    printf("It is prime no. ");
  }
  else
  {
    printf("It is not prime no.");
  }
}