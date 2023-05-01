/*Question 4. You decide to bet on the final match of the Tug of War National Championship.
Prior to the match the names and weights of the players are presented, alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). There is the same number of players on each side. You record the player weights as they are presented and calculate a total weight for each time to inform your bet. You write a C program to assist with this.
Your program should first read an integer indicating the number of members per team. Then, the program should read the player weights (integers representing kilograms) alternating by team.
After calculating the total weight of each team, the program should display the text "Team X has an advantage" (replacing X with 1 or 2 depending on which team has a greater total weight).
You will then display the text "Total weight for team 1:" followed by the weight of team 1, then "Total weight for team 2:" followed by the weight of team 2 (see example below).
You are guaranteed that the two teams will not have the same total weight.
*/

#include <stdio.h>

int main()
{
  int members, weight, totalWeight1 = 0, totalWeight2 = 0;

  printf("enter no. of member in each team :");
  scanf("%d", &members);

  for (int i = 0; i < members * 2; i++)
  {
    printf("enter weights :");
    scanf("%d", &weight);

    if (i % 2 == 0)
    {
      totalWeight1 = totalWeight1 + weight;
    }
    else
    {
      totalWeight2 = totalWeight2 + weight;
    }
  }

  if (totalWeight1 > totalWeight2)
  {
    printf("Team 1 has an advantage\n");
    printf("Total weight for team 1: %d\n", totalWeight1);
    printf("Total weight for team 2: %d\n", totalWeight2);
  }
  else
  {
    printf("Team 2 has an advantage\n");
    printf("Total weight for team 1: %d\n", totalWeight1);
    printf("Total weight for team 2: %d\n", totalWeight2);
  }
  return 0;
}
