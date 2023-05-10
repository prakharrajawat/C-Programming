#include <stdio.h>
#include <math.h>
int main()
{
  int n = 0;
  int p = 0;
  int num, i;
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &num);
    if (num >= 0)
      p = p + 1;
    else if (num <= -(0))
      n = n + 1;
  }
  printf("positive num=%d\n negative number=%d", p, n);
}