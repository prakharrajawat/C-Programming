#include <stdio.h>
void pattern1(int ncol);
void pattern2(int nlines);
void pattern3(int ncol, int nlines);

int i, j;
void main()
{

  int ncol;
  int nlines;
  printf("elements in ncol=");
  scanf("%d", &ncol);
  printf("elements in nlines=");
  scanf("%d", &nlines);

  pattern1(ncol);
  pattern2(nlines);
  pattern3(ncol, nlines);
}

void pattern1(int ncol)
{
  for (i = 0; i < ncol; i++)
  {
    printf("x");
  }
  printf("\n");
}

void pattern2(int nlines)
{
  for (i = 0; i < nlines; i++)
  {
    for (j = 0; j < i + 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}

void pattern3(int ncol, int nlines)
{

  for (i = 0; i < nlines; i++)
  {
    for (j = 0; j < ncol; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
