#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a, b, x;
  float c, d, y;

  scanf("%d%d", &a, &b);
  scanf("%f%f", &c, &d);

  a = a + b;
  x = a - b;
  c = c + d;
  y = c - d;

  printf("%d %d", a, b);
  printf("\n");
  printf("%0.1f %0.1f", c, d);
  return 0;
}