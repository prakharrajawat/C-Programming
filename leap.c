#include <stdio.h>
int leap_year();

int main()
{

  printf("%d", leap_year());

  return 0;
}

int leap_year()
{
  for (int i = 1995; i <= 2022; i++)
  {
    int count = 0;
    int *ptr;
    ptr = count;
    if (i % 4 == 0 || i % 400 == 0)
    {
      return ptr = ptr + 1;
    }
    else
    {
      return 0;
    }
  }
}