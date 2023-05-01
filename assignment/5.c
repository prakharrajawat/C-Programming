/*
Question 5. The hostel in which you stop for the night changes its prices according to the age of the customer and the weight of their luggage. The rules are not very clear, so you decide to write a small program that will easily allow you and your travel companions to know the price of one night.
One room costs nothing if you are 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.
*/
#include <stdio.h>
int hostel_cost(int customers_age, int luggage);
int main()
{

  int customers_age, luggage;
  printf("enter customers age :");
  scanf("%d", &customers_age);
  printf("enter weight of luggage :");
  scanf("%d", &luggage);
  printf("%d", hostel_cost(customers_age, luggage));

  return 0;
}

int hostel_cost(int customers_age, int luggage)
{
  if (customers_age < 10)
  {
    return (5);
  }
  else if (customers_age == 60)
  {
    return (0);
  }
  else if (luggage > 20)
  {
    return (40);
  }
  else
  {
    return (30);
  }
}
