#include <stdio.h>

int main()
{
  int n;
  int i, j, temp;
  char a[100];
  printf("enter no:");
  scanf("%d", &n);
  for (i = 0; n > 0; i++)
  {

    temp = n % 16;
    if (temp < 10)
    {
      temp = temp + 48;
    }
    else
    {
      temp = temp + 55;
    }
    a[i] = temp;
    n = n / 16;
  }
  for (j = i - 1; j >= 1; j--)
  {
    printf("%c", a[j]);
  }
  return 0;
}