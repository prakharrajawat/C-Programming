/*
Question 7. Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use! There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams). Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array. It should then read an integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity.
*/
#include <stdio.h>
int ingredient_quantity(int ingredient_q[], int ingredient_id)
{
  int quantity;
  quantity = ingredient_q[ingredient_id];
  printf("%d", quantity);
}
int main()
{
  int i;
  int ingredient_q[10];
  int ingredient_id;
  printf("enter the ingredient you have to use in grams:");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &ingredient_q[i]);
  }
  printf("enter the ingredient id between 0 to 9:\n");
  scanf("%d", &ingredient_id);
  ingredient_quantity(ingredient_q, ingredient_id);
  return 0;
}
