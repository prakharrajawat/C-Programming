#include <stdio.h>

void main()
{

  int i;
  int Num[10];
  for (i = 0; i <= 9; i++)

  {
    printf("enter no:");
    scanf("%d", &Num[i]);
  }
  int max = Num[0];
  for (i = 0; i <= 9; i++)
  {
    if (max < Num[i])
    {
      max = Num[i];
      Num[i] = Num[i + 1];
    }
  }

  for (i = 0; i <= 9; i++)
  {
    printf("IN ASCENDING ORDER %d", Num[i]);
  }
}
