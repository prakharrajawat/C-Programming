#include <stdio.h>

struct address
{

  int houseno;
  int block;
  char city[100];
  char state[100];
};
void printadds(struct address add);

int main()
{
  struct address adds[5];
  printf("enter address of 1st person");
  scanf("%d", &adds[0].houseno->houseno[0]);
  scanf("%d", &adds[0].houseno->block[0]);
  scanf("%s", &adds[0].houseno->city[0]);
  scanf("%s", &adds[0].houseno->state[0]);

  printf("enter address of 2nd person");
  scanf("%d", &adds[0].houseno->houseno[1]);
  scanf("%d", &adds[0].houseno->block[1]);
  scanf("%s", &adds[0].houseno->city[1]);
  scanf("%s", &adds[0].houseno->state[1]);

  printf("enter address of 3rd person");
  scanf("%d", &adds[0].houseno->houseno[2]);
  scanf("%d", &adds[0].houseno->block[2]);
  scanf("%s", &adds[0].houseno->city[2]);
  scanf("%s", &adds[0].houseno->state[2]);

  printf("enter address of 4th person");
  scanf("%d", &adds[0].houseno->houseno[3]);
  scanf("%d", &adds[0].houseno->block[3]);
  scanf("%s", &adds[0].houseno->city[3]);
  scanf("%s", &adds[0].houseno->state[3]);

  printf("enter address of 5th person");
  scanf("%d", &adds[0].houseno->houseno[4]);
  scanf("%d", &adds[0].houseno->block[4]);
  scanf("%s", &adds[0].houseno->city[4]);
  scanf("%s", &adds[0].houseno->state[4]);
  printadds(adds[0].houseno[0]);
  printadds(adds[0].houseno[1]);
  printadds(adds[0].houseno[2]);
  printadds(adds[0].houseno[3]);
  printadds(adds[0].houseno[4]);
}
void printadds(struct address add)
{
  printf("%d%d%s%s", add.houseno, add.block, add.city, add.state);
}
