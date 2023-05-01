/*Question 10. You want to determine the number of cities in a given region that have a population strictly greater than 10,000. To do this, you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers).*/

#include <stdio.h>
int city_popn(int num_cities)
{
  int popn;
  int found = 0;
  for (int i = 0; i < num_cities; i++)
  {
    scanf("%d", &popn);

    if (popn > 10000)
    {
      found++;
    }
  }
  return found;
}
int main()
{
  int num_cities, population;

  printf("enter no. of cities :");
  scanf("%d", &num_cities);

  printf("%d", city_popn(num_cities));

  return 0;
}
