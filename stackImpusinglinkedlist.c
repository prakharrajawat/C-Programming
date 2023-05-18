#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct stackLL
{
  int i;
  struct stackLL *next;
} stack;

stack *top = NULL;
void stackPush(int x)
{
  stack *z = (stack *)malloc(sizeof(stack));
  z->i = x;
  z->next = top;
  top = z;
}
void stackPop()
{
  if (top == NULL)
  {
    printf("Stack is Empty");
  }
  else
  {
    stack *z = top;
    top = top->next;
    printf("Deletd item :: %d ", z->i);
    free(z);
  }
}
void stackDisplay()
{
  if (top == NULL)
  {
    printf("Stack is Empty");
  }
  else
  {
    stack *z = top;
    printf("\nDisplaying Stack :: ");
    while (z != NULL)
    {
      printf("%d\n", z->i);
      z = z->next;
    }
  }
}

int main()
{
  int value, choice;
  while (1)
  {
    printf("\n");
    printf("------------------------------------\n");
    printf("        xxxxxxx MENU xxxxxxx \n");
    printf("------------------------------------\n");
    printf("1. Insert Element into Stack.\n");
    printf("2. Pop Element from Stack.\n");
    printf("3. Display Stack.\n");
    printf("4. Exit Operations.\n");
    printf("\n------------------------------------\n");
    printf("\nEnter your choice :: ");
    scanf("%d", &choice);
    system("cls");
    switch (choice)
    {
    case 1:
      printf("Enter value for pushing into stack :: ");
      scanf("%d", &value);
      stackPush(value);
      printf("** Value Inserted **\n\n\n");
      break;
    case 2:
      stackPop();
      break;
    case 3:
      stackDisplay();
      break;

    case 4:
      exit(0);
    default:
      printf("-------------------\n");
      printf(" Invalid Operation :: \nEnter choice 1/2/3/4 \n");
      printf("-------------------\n");
    }
  }
  return 0;
}
