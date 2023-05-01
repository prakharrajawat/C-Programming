/*Question 25.
The goal of this problem is to find the smallest integer in a list of numbers.
To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".
Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.
*/

#include <stdio.h>

int min(int n)
{
  int num[100];
  int minimum;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &num[i]);
    minimum = num[0];
    if (num[i] < minimum)
    {
      minimum = num[i];
    }
  }
  return minimum;
}
int main()
{
  int n;
  printf("enter value for n :");
  scanf("%d", &n);
  printf("Smallest :%d", min(n));
  return 0;
}
