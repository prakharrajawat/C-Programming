// WAP to calculate area of square
#include <stdio.h>
void Areasquare(int a);

void main()
{

  Areasquare(9);
  Areasquare(10);
}
void Areasquare(int a)
{
  int area = a * a;
  printf("Area of square:%d\n", area);
}