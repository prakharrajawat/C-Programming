#include <stdio.h>

void main()
{
  int i = 5;
  int *ptr = &i;
  int **pptr = &ptr;

  printf("%d", **pptr);
}