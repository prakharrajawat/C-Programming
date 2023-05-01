#include <stdio.h>
#include <conio.h>

void Meter_to_Feet(double);
void Grams_to_Pounds(double);
void Degrees_to_Farenheit(double);

void main()
{
  int i, values;
  printf("enter the no of values to be converted:");
  scanf("%d", &values);

  double num;
  char unit;

  for (int i = 0; i < values; i++)
  {
    printf("enter the number with unit of the values:");
    scanf("%lf %c", &num, &unit);

    if (unit == 'm')
    {
      Meter_to_Feet(num);
    }
    else if (unit == 'g')
    {
      Grams_to_Pounds(num);
    }
    else if (unit == 'c')
    {
      Degrees_to_Farenheit(num);
    }
  }
}

void Meter_to_Feet(double m)
{
  double ft;
  ft = 3.2808 * m;
  printf("%0.6lf ft\n", ft);
}

void Grams_to_Pounds(double g)
{
  double pounds;
  pounds = 0.002205 * g;
  printf("%0.6lf pounds\n", pounds);
}

void Degrees_to_Farenheit(double c)
{
  double farent;
  farent = 32 + 0.8 * c;
  printf("0.6lf f\n", farent);
}