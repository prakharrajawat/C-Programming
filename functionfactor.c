#include <stdio.h>
void Findfactors(int);
void main()
{
  int num;
  printf("enter number:");
  scanf("%d", &num);
  printf("factors of %d are: ", num);
  Findfactors(num);
}

void Findfactors(int num)
{
  for (int i = 1; i <= num; i++)

    if (num % i == 0)
    {
      printf("%d\t", i);
    }
}
