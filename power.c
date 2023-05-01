#include <stdio.h>

int power(int x, int y)
{
  int i, z = 1;
  for (i = 1; i <= y; i++)
  {
    z = z * x; 
  }
  return z;
}

int main()
{

  int x, y, a;
  printf("enter value for x :");
  scanf("%d", &x);
  printf("enter value for y :");
  scanf("%d", &y);
  a = power(x, y);
  printf("%d", a);
  return 0;
}