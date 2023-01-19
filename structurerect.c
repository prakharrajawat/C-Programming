#include <stdio.h>

struct rectangle
{
  float l;
  float b;
};

void main()
{
  float area;
  struct rectangle rect;

  printf("enter lenght and breadth of rectangle:");
  scanf("%f%f", &rect.l, &rect.b);

  area = rect.l * rect.b;

  printf("Area : %f", area);
}