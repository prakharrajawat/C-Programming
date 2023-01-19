// WAP a program to reverse inputted char.

#include <stdio.h>

int main()
{
  char arr[100];
  int i;

  printf("Enter elements in array: ");
  for (i = 0; i <= 9; i++)
  {

    fflush(stdin);
    scanf("%c", &arr[i]);
  }

  printf("\nArray in reverse order: ");
  for (i = 9; i >= 0; i--)
  {
    printf("%c\t", arr[i]);
  }

  return 0;
}
