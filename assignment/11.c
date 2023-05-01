/*Question 11. Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.*/

#include <stdio.h>
void pattern_Square(int n);

int main()
{
  int n;
  printf("enter value for n :");
  scanf("%d", &n);
  pattern_Square(n);

  return 0;
}

void pattern_Square(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}