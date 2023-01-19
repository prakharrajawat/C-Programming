
// Wap to find LCM of two numbers
#include <stdio.h>

void main()
{

  int num1, lcm, num2, x;

  printf("enter any two positive numbers:");
  scanf("%d%d", &num1, &num2);

  for (int i = 1; i <= num1 && i <= num2; i++)
  {
    // checking whether num1 and num2 are divisible by  i or not
    if (num1 % i == 0 && num2 % i == 0)
    {
      x = i;
      printf("%d\n", x);
    }

    lcm = (num1 * num2) / x;
  }
  printf("Lcm of %d and %d is %d", num1, num2, lcm);
}