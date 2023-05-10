#include <stdio.h>

int main(void)
{
  int m, n;
  double x = 0.0, y = 1.0;
  printf("Enter number of x and y points.\n");
  scanf("%d %d", &m, &n);
  for (int j = 0; j < n; j++)
  {

    for (int i = 0; i < m; i++)
    {
      x = (x - 1.0) / (n - 1);
      y = (y + 1.0) / (m - 1);
      printf("(%.2f, %.2f) ", m, n);
    }
    printf("\n");
  }
  return 0;
}