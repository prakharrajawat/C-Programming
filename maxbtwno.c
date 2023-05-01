#include <stdio.h>
int max2no(int num1, int num2);
int max3no(int num1, int num2, int num3);

int main()
{
  int num1, num2, num3;
  printf("enter any 3 numbers :");
  scanf("%d%d%d", &num1, &num2, &num3);

  printf("Max from %d and %d is %d\n", num1, num2, max2no(num1, num2));
  printf("Max from %d and %d is %d\n", max2no(num1, num2), num3, max3no(num1, num2, num3));
}
int max2no(int num1, int num2)
{
  return (num1 > num2) ? num1 : num2;
}
int max3no(int num1, int num2, int num3)
{
  return max2no(num1, num2) > num3 ? max2no(num1, num2) : num3;
}