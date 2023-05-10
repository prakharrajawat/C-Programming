#include <stdio.h>

int main()
{
  int arr[40];
  int i, n, Num, count = 0;

  printf("enter no. of elements: ");
  scanf("%d", &n);

  printf("enter the no. to check whether(present 3 times or no) : ");
  scanf("%d", &Num);

  for (i = 1; i <= n; i++)
  {
    printf("Enter elements : ");
    scanf("%d", &arr[i]);
  }

  for (i = 1; i <= n; i++)
  {

    if (arr[i] == Num)
    {
      count = count + 1;
    }
  }

  if (count == 3)
  {
    printf("Number is Present 3 times !");
  }
  else
  {
    printf("Number is not Present!");
  }

  return 0;
}