#include <stdio.h>
int hostel_bill(int time)
{
  int x, base_price = 10;
  if (0 < time > 12)
  {
    x = time * 5 + base_price;
  }
  return x;
}

int main()
{
  int time;
  int t;
  // enter time like 1as 1 pm ,2 for 2 pm and so on
  printf("enter the time ");
  scanf("%d", &time);
  t = hostel_bill(time);
  printf("%d", t);

  return 0;
}