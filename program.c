#include <stdio.h>
void cross(int ncol);
0 void RightAngleTriangle(int ncol);
void rectangle(int ncol, int nlin);

int i, j;
cross(int ncol)
{

  for (i = 0; i < ncol; i++)
  {
    printf("x");
  }
  printf("\n");
}
RightAngleTriangle(int ncol)
{
  for (i = 0; i < ncol; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}
rectangle(int ncol, int nlin)
{
  for (i = 0; i < ncol; i++)
  {
    for (j = 0; j < nlin; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
int main()
{
  int ncol, nlin;
  int x, y, z;
  printf("elements in ncol=");
  scanf("%d", &ncol);
  printf("elements in nlin=");
  scanf("%d", &nlin);

  cross(ncol);
  RightAngleTriangle(ncol);
  rectangle(ncol, nlin);

  return 0;
}