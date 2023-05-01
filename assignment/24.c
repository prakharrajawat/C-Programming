/*Question 24.Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.
Here are the conversion rules to use:
1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;
temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.
On the first input line you are given the number of conversions to be made. Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).
Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles.
*/

#include <stdio.h>
#include <conio.h>
double Meter_to_Feet(double m)
{
  double ft;
  ft = 3.2808 * m;
  return ft;
}

double Grams_to_Pounds(double g)
{
  double pounds;
  pounds = 0.002205 * g;
  return pounds;
}

double Degrees_to_Farenheit(double c)
{
  double farent;
  farent = 32 + 0.8 * c;
  return farent;
}

void main()
{
  int values;
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
      printf("%0.6lf ft\n", Meter_to_Feet(num));
    }
    else if (unit == 'g')
    {
      printf("%0.6lf pounds\n", Grams_to_Pounds(num));
    }
    else if (unit == 'c')
    {
      printf("0.6lf f\n", Degrees_to_Farenheit(num));
    }
  }
}
