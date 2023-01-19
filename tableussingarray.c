#include <stdio.h>
void main()
{

  int table[10];
  int i, n;
  printf(" enter a no:");
  scanf("%d", &n);

  for (i = 0; i <= 9; i++)
  {
    table[i] = n * (i + 1);
    printf("table of %d : %d\n", n, table[i]);
  }
}