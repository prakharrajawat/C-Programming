// Write a program to input 10 numbers in the array and display them

#include <stdio.h>

int main()
{
  int arr[10], i;
  for (i = 0; i < 10; i++)
  {
    printf("Enter value for arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }
  printf("The array elements are : \n");
  for (i = 0; i < 10; i++)
    printf("%d\n", arr[i]);
}