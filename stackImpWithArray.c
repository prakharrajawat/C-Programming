#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

struct stackImpWithArray
{
  int stack[MAX];
  int top;
} s;

int isStackFull();
int isStackEmpty();
int stackPush(int);
int stackPop();
int stackPeek();
void stackDisplay();

int main()
{
  int value;
  s.top = -1;
  int choice;
  while (1)
  {
    printf("\n");
    printf("------------------------------------\n");
    printf("        xxxxxxx MENU xxxxxxx \n");
    printf("------------------------------------\n");
    printf("1. Insert Element into Stack.\n");
    printf("2. Pop Element from Stack.\n");
    printf("3. Display Stack.\n");
    printf("4. Peek Top Element of Stack.\n");
    printf("5. Exit Operations.\n");
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
      if (stackPop())
      {
        printf("Stack is Empty !! ");
      }
      else
      {
        printf("Deleted Item  :: %d", stackPop());
      }
      break;
    case 3:
      stackDisplay();
      break;
    case 4:
      if (stackPeek() == 0)
      {
        printf("Stack is Empty");
      }
      else
      {
        printf("\n------------------------\n");
        printf("%d", s.top);
        printf(" Top Element :: %d\n", stackPeek());
        printf("------------------------\n");
      }
      break;

    case 5:
      exit(0);
    default:
      printf("-------------------\n");
      printf(" Invalid Operation :: \nEnter choice 1/2/3/4 \n");
      printf("-------------------\n");
    }
  }
  return 0;
}
// FULL FUNCTION CHECKING WHETHER STACK IS FULL OR NOT
int isStackFull()
{
  if (s.top == MAX - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
// EMPTY FUNCTION CHECKING WHETHER STACK IS EMPTY OR NOT
int isStackEmpty()
{
  if (s.top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
// STACK PUSH FUNCTION
int stackPush(int value)
{
  if (isStackFull())
  {
    printf("Stack Overflowed !!\n");
  }
  else
  {
    s.stack[++s.top] = value;
  }
}

// STACK POP FUNCTION
int stackPop()
{
  if (isStackEmpty())
  {
    printf("Stack is Empty");
    return;
  }
  else
  {
    return s.stack[s.top--];
  }
}
//  PEEK TOP OF STACK
int stackPeek()
{
  if (isStackEmpty())
  {
    return 0;
  }
  else
  {
    int peek = s.stack[s.top];
    return peek;
  }
}
// STACK DISPLAY
void stackDisplay()
{
  if (isStackEmpty())
  {
    printf("Stack is Empty !!");
  }
  else
  {
    printf("-----------------------------------------\n");
    printf("DISPLAYING STACK :: ");
    for (int i = s.top; i >= 0; i--)
    {

      printf("%d\t", s.stack[i]);
    }
    printf("\n----------------------------------------\n");
    printf("\n\n");
  }
}
