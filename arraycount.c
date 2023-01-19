#include <stdio.h>

void main()
{

  int i, count = 0;

  char Gen[] = {'m', 'f', 'm', 'f', 'f'};
  for (i = 0; i <= 4; i++)
  {
    if (Gen[i] == 'm' || Gen[i] == 'f')
    {
      count = count + 1;
    }
  }
  printf(" total:%d", count);
}