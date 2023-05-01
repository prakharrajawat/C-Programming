#include <stdio.h>

void main()
{

  int i, occur = 0;

  char Gen[] = {'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F'};

  for (i = 0; i <= 9; i++)
  {
    if (Gen[i] == 'M')
    {
      occur = occur + 1;
    }
  }
  printf("NO of males : %d", occur);

  // int i, occr = 0;
  // int arr[] = {
  //     1,
  //     4,
  //     6,
  //     7,
  //     8,
  //     0,
  //     3,
  //     2,
  //     4,
  //     6,
  // };

  // for (i = 0; i < 10; i++)
  // {
  //   if (arr[i] == 8)
  //   {
  //     occr = occr + 1;
  //   }
  // }

  // printf(" Occurred %d Times.\n", occr);
}