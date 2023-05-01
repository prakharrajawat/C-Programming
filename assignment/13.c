/*Question 13. In order to be able to better fight various epidemics in a region, the department of medicine of a major university has launched a large study. Researchers are interested in how fast an epidemic spreads, and therefore the speed at which health measures must be put in place. Your program should first read an integer representing the total population of the area. Knowing that a person was infected on day 1 and that each infected person contaminates two new people every day, you must calculate the day at which the entire population of the area will be infected.*/

#include <stdio.h>
int epidemic(int total_population);

int main()
{
  int total_population;
  scanf("%d", &total_population);
  printf("%d", epidemic(total_population));

  return 0;
}

int epidemic(int total_population)
{
  int day = 1, contaminated = 1;

  for (int i = 0; contaminated < total_population; i++)
  {
    day = day + 1;
    contaminated = contaminated * 3;
  }

  return day;
}