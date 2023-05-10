#include <stdio.h>
struct fraction
{
  int n;
  int d;
};
void main()
{
  struct fraction f[100];
  int i, j, n, x = 0;
  printf("how many fractions do you want enter =");
  scanf("%d", &n);
  printf("enter fractions below=\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d%d", &f[i].n, &f[i].d);
  }
  for (j = 0; j < n; j++)
  {
    if (f[j].d == f[j + 1].d)
    {
      x = x + f[j].n;
    }
    else
    {
      printf("these are not alike");
      break;
    }
  }
  x = x + f[j + 1].n;
  printf("their sum is equal=");
  printf("%d/%d", x, f[0].d);
}