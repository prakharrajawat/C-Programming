#include <stdio.h>

int main()
{

  int marks;

  printf("enter marks(1-100):");
  scanf("%d", &marks);

  if (marks <= 100 && marks >= 90)

    printf("Grade: A");

  else if (marks < 90 && marks >= 80)
    printf("Grade: B");

  else if (marks < 80 && marks >= 70)
    printf("Grade: C");

  else if (marks < 70 && marks >= 60)
    printf("Grade: D");

  else
  {
    printf("Grade: F");
  }

  return 0;
}
