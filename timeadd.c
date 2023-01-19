#include <stdio.h>
#include <conio.h>

struct time
{
  int h;
  int m;
  int s;
};
struct time2
{
  int x;
  int y;
  int z;
};
int main()
{
  struct time t;
  struct time2 t2;
  int a, b, c, p, q, r, j, k;
  printf("enter first time=");
  scanf("%d%d%d", &t.h, &t.m, &t.s);
  printf("if time is in AM enter 0 otherwise enter 1=");
  scanf("%d", &j);
  printf("enter second time=");
  scanf("%d%d%d", &t2.x, &t2.y, &t2.z);
  printf("if time is in AM enter 0 otherwise enter 1=");
  scanf("%d", &k);

  if (j == 1)
    t.h = t.h + 12;
  else if (k == 1)
    t2.x = t2.x + 12;
  else if (j == 0)
  {
    if (t.h == 12)
      t.h = t.h - 12;
  }
  else if (k == 0)
  {
    if (t2.x == 12)
      t2.x = t2.x - 12;
  }

  a = t.h - t2.x;
  if (a < 0)
    p = -a;
  else
    p = a;
  b = t.m - t2.y;
  if (b < 0)
    q = -b;
  else
    q = b;
  c = t.s - t2.z;
  if (c < 0)
    r = -c;
  else
    r = c;
  printf("difference is = %d:%d:%d", p, q, r);

  return 0;
}