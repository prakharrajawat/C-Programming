// WAP to display larger from two entered strings
#include <stdio.h>
#include <string.h>

void main()
{
  // int r;
  char a[20];
  char b[40];
  gets(a);
  gets(b);

  if (strlen(a) > strlen(b))
    puts(a);
  else if (strlen(a) < strlen(b))
    puts(b);
  else
    printf("both strings are equal");
}