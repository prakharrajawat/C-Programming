#include <stdio.h>

int leading_digit(int x)
{
  int d = 0;

  while (x > 0)
  {
    d = x % 10;
    x /= 10;
  }
  return d;
}

int main()
{
  int x, d;
  printf("Enter a positive number: ");
  scanf("%d", &x);
  d = leading_digit(x);
  printf("The leading digit is %d", d);

  return 0;
}