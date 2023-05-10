// WAP a program to reverse inputted array.

#include <stdio.h>

int main()
{
  int arr[100];
  int i, n;
  printf("enter no. of elements: ");
  scanf("%d", &n);

  printf("Enter elements in array: ");
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("\nArray in reverse order: ");
  for (i = n; i >= 1; i--)
  {
    printf("%d\t", arr[i]);
  }
  printf("%d", arr[2]);

  return 0;
}

/*

#include <stdio.h>
void main()
{
  char str[100];
  int i, n;
  printf("size of a word : ");
  scanf("%d", &n);
  printf("enter the word according to your entered size =");
  for (i = 0; i <= n; i++)
  {
    scanf("%c", &str[i]);
  }
  printf("\nArray in reverse order: ");
  for (i = n; i >= 0; i--)
  {
    printf("%c\n", str[i]);
  }
}
*/