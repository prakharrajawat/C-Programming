#include <stdio.h>
#define SIZE 50

void main()
{

  int i;
  int Num[SIZE] = {1, 5, 7, 8, 9, 2, 0, 1, 6, 3};

  for (i = 0; i <= 9; i++)

  {
    if (Num[i] == 4)
    {
      break;
    }
  }
  printf("No. is present");
}