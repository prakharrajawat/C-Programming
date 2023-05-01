/*Question 12. Much of the work of a university administration (in addition to managing teachers, researchers, students, courses, etc.) is to ensure the proper functioning of the university and in particular that the accounting job is well done. Once a year, an annual report of expenditures must be made.
All expenses for the year have been recorded and classified in a multitude of files and the sum of all these expenses must now be calculated. But no one knows exactly how many different expenses have been made in the past year!
--> Your program will have to read a sequence of positive integers and display their sum. We do not know how many integers there will be, but the sequence always ends with the value -1 (which is not an expense, just an end marker).
*/

#include <stdio.h>
int expenses()
{
  int num, sum = 0;
  int i = 0;
  while (1)
  {
    scanf("%d", &num);
    if (num == -1)
    {
      break;
    }
    else
    {
      sum = sum + num;
    }
    i++;
  }
  return sum;
}

int main()
{
  printf("sum : %d", expenses());
  return 0;
}