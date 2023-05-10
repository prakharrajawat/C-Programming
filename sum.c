#include <stdio.h>

void main()
{

  int x[5], y[5], z[5];

  z[5] = x[5] + y[5];
  printf("%d", sizeof(z[5]));
}