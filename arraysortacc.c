#include <stdio.h>

void main()
{

  int i, a, j, Num[100];

  for (i = 0; i < 10; i++)
  {
    printf("enter numbers:");
    scanf("%d", &Num[i]);
  }
  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      if (Num[i] = Num[j])
      {
        a = Num[i];
        Num[i] = Num[j];
        Num[j] = a;
      }
    }
  }

  printf("Array elements sorted in asscending order are:");
  for (i = 0; i < 10; i++)
  {
    printf("%d\t", Num[i]);
  }
}