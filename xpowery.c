#include <stdio.h>
#include <math.h>
float findPow(int x, int y);
void main()
{
  int x, y;

  printf("enter the value for x:");
  scanf("%d", &x);

  printf("enter the value for y:");
  scanf("%d", &y);

  printf("%.1f", findPow(x, y));
}

float findPow(int a, int b)
{
  int xpowy = pow(a, b);
  return xpowy;
}
