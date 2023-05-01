#include <stdio.h>
int main()
{
  int n, s, c;
  printf("Enter the number b/w 1 to 100");
  c = rand() % 100 + 1;
  s = 0;
  while (1)
  {
    scanf("%d", &n);
  }
  if (n == c)
  {
    printf("correct the choice\n");
  }
  else if (n > c)
  {
    printf("It is great");
  }
  else
  {
    printf("it is less");
  }
}
s = s + 1;
printf("Total step:%d\n", s);
return 0;
}