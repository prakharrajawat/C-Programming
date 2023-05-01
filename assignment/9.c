/*
Question 9. ou plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it with 6 decimal places.

*/
#include <stdio.h>
double ingredients_cost(int no_of_ingredients)
{
  double price = 0;
  double cost[10];
  double pounds[10];
  for (int i = 0; i < no_of_ingredients; i++)
  {
    printf("enter cost :");
    scanf("%lf", &cost[i]);
  }
  for (int i = 0; i < no_of_ingredients; i++)
  {
    printf("enter quatity(pounds) :");
    scanf("%lf", &pounds[i]);
    price = price + cost[i] * pounds[i];
  }
  return price;
}

int main()
{
  int no_of_ingredients;

  printf("enter no. of ingredients to take input :");
  scanf("%d", &no_of_ingredients);
  printf(" Total cost : %.6lf", ingredients_cost(no_of_ingredients));
  return 0;
}
