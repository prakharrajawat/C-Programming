#include <stdio.h>
#include <conio.h>
struct fraction
{
  int n;
  int d;
};
void main()
{
  struct fraction f[4];
  int i, x = 0;
  printf("enter fractions below=\n");
  for (i = 0; i < 4; i++)
  {
    scanf("%d%d", &f[i].n, &f[i].d);
  }
  for (i = 0; i < 4; i++)
  {
    if (f[i].d == f[i + 1].d)
    {
      x = x + f[i].n;
    }
    else
    {
      printf("these are not alike");
      break;
    }
  }
  printf("their sum is equal=");
  printf("%d/%d", x, f[0].d);
}