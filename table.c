#include <stdio.h>

int table_print(int num);

void main()
{

  int num;

  printf("enter value : ");
  scanf("%d", &num);
  table_print(num);
}

int table_print(int num)
{
  for (int i = 1; i <= 10; i++)
  {
    int t = num * i;
    printf("%d x %d = %d\n", num, i, t);
  }
}