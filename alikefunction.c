#include <stdio.h>

void fraction(int d1, int d2);

int main()
{
  int n1, n2, d1, d2;
  printf("Enter numerator and denominator for 1st fraction:");
  scanf("%d%d", &n1, &d1);
  printf("Enter numerator and denominator for 2nd fraction:");
  scanf("%d%d", &n2, &d2);

  fraction(d1, d2);

  return 0;
}

void fraction(int d1, int d2)
{

  if (d1 == d2)
  {
    printf("THEY ARE ALIKE FRACTIONS");
  }
  else
  {
    printf("THEY ARE NOT ALIKE FRACTIONS");
  }
}
