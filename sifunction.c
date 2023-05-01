// WAP to calculate simple interest and compound interest using function.

#include <stdio.h>
#include <math.h>

float Simple_Interest(float p, float r, float t);
float Compound_Interest(float p, float r, float t);
int main()
{
  float p, r, t;
  printf("enter principal,rate, time:");
  scanf("%f%f%f", &p, &r, &t);
  printf("Simple Interest:%0.2f\t", Simple_Interest(p, r, t));
  printf("Compound Interest:%0.2f\t", Compound_Interest(p, r, t));

  return 0;
}
float Simple_Interest(float p, float r, float t)
{
  return (p * r * t) / 100;
}
float Compound_Interest(float p, float r, float t)
{
  return p * pow((1 + r / 100), t);
}
