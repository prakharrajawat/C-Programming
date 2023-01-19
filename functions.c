#include <stdio.h>

float Areasquare(float side);
float Areacircle(float rad);
float Arearectangle(float a, float b);

int main()
{
  float a = 5.0;
  float b = 4.0;
  float rad = 4.0;
  float side = 6.0;
  printf("Area of rectangle: % f\n", Arearectangle(a, b));
  printf("Area of square: % f\n", Areasquare(side));
  printf("Area of circle : %f\n", Areacircle(rad));
  return 0;
}
float Areasquare(float side)
{
  return side * side;
}
float Areacircle(float rad)
{
  return 3.14 * rad * rad;
}
float Arearectangle(float a, float b)
{
  return a * b;
}
