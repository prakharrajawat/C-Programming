#include <stdio.h>
#include <stdlib.h>

typedef struct QueueLL
{
  int i;
  struct QueueLL *next;
} queue;

queue *front = NULL, *rear = NULL;

void Enque(int x)
{
  queue *z = (queue *)malloc(sizeof(queue));
  z->i = x;
  z->next = NULL;
  if (front == NULL)
  {
    front = rear = z;
  }
  else
  {
    rear->next = z;
    rear = z;
  }
}

void Deque()
{
  queue *z = front;
  if (front == NULL)
  {
    printf("Queue is Empty");
  }
  else
  {
    if (z->next == NULL)
    {
      front = rear = NULL;
    }
    else
    {
      front = z->next;
    }
    printf("Dequed item :: %d", z->i);
    free(z);
  }
}

void queueDisplay()
{
  if (front == NULL)
  {
    printf("Queue is Empty");
  }
  else
  {
    queue *z = front;
    printf("Displaying Queue :: ");
    while (z != NULL)
    {
      printf("%d \t", z->i);
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
      Enque(value);
      printf("** Value Inserted **\n\n\n");
      break;
    case 2:
      Deque();
      break;
    case 3:
      queueDisplay();
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