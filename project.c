#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int number, guess, nguesses = 1;
  srand(time(0));
  number = rand() % 100 + 1;

  do
  {
    printf("guess 1 to 100\n");
    scanf("%d", &guess);

    if (guess > number)
    {
      printf("take low number\n");
    }
    if (guess < number)
    {
      printf("take high number");
    }
    else
    {
      printf("guess is %d attempts\n", nguesses);
    }
    nguesses++;
  } while (guess != number);

  return 0;
}