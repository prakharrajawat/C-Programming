#include <stdio.h>

struct fraction
{
  int d;
  int n;
};
int main()
{
  struct fraction f1, f2;
  printf("enter first fraction");
  scanf("%d%d", &f1.n, &f1.d);
  printf("enter second fraction");
  scanf("%d%d", &f2.n, &f2.d);
  if (f1.d == f2.d)
  {
    float add = (f1.n + f2.n) / f1.d;
    printf("ADDITION OF ALIKE FRACTION= %f", add);
  }
  else
  {
    printf("IT IS NOT A ALIKE FRACTION");
  }

  return 0;
}