// Write a program to calculate factorial of given number using while loop !!

#include <stdio.h>

int main()
{

  int n, i, fact = 1;

  printf("enter a number:");
  scanf("%d", &n);

  i = 1;
  while (i <= n)
  {
    fact = fact * i;
    i++;
  }
  printf("factorial of %d is : %d", n, fact);
}