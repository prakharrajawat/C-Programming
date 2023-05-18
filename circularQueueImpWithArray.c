#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

struct circularQueueImpWithArray
{
  int queue[MAX];
  int front, rear;
} q;

int Enque(int);
int Deque();
void queueDisplay();
int isFull();
int isEmpty();

int main()
{
  int value;
  q.front = q.rear = -1;
  int choice;
  while (1)
  {
    printf("\n");
    printf("------------------------------------\n");
    printf("        xxxxxxx MENU xxxxxxx \n");
    printf("------------------------------------\n");
    printf("1. Insert Element into Queue.\n");
    printf("2. Deque Element from Queue\n");
    printf("3. Display Queue.\n");
    printf("4. Exit Operations.\n");
    printf("\n------------------------------------\n");
    printf("\nEnter your choice :: ");
    scanf("%d", &choice);
    system("cls");

    switch (choice)
    {
    case 1:
      printf("Enter value for pushing into queue :: ");
      scanf("%d", &value);
      Enque(value);
      printf("** Value Inserted **\n\n\n");
      break;
    case 2:
      printf("\nDequed Element :: %d", Deque());
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

int isFull()
{
  if ((q.rear + 1) % MAX == q.front)
    return 1;
  else
    return 0;
}
int isEmpty()
{
  if (q.front == -1 && q.rear == -1)
    return 1;
  else
    return 0;
}

// QUEUE ENQUE OPERATION
int Enque(int value)
{
  if (isFull())
  {
    printf("Queue is Overflowed !!");
    return (-1);
  }
  else
  {
    if (q.front = q.rear == -1)
    {
      q.front = q.rear = 0;
    }
    else
    {
      q.rear = (q.rear + 1) % MAX;
    }
    q.queue[q.rear] = value;
  }
}

// QUEUE DEQUE OPERATION
int Deque()
{
  int x;
  if (isEmpty())
  {
    printf("Queue is Underflowed !!");
    return -1;
  }
  else
  {
    x = q.queue[q.front];
    if (q.front == q.rear)
    {
      q.rear = q.front = -1;
    }
    else
    {
      q.front = (q.front + 1) % MAX;
    }
    return x;
  }
}

// QUEUE DISPLAY
void queueDisplay()
{
  if (q.front == -1 && q.rear == -1)
  {
    printf("Queue is Empty !!");
  }
  else
  {
    printf("-----------------------------------------\n");
    printf("DISPLAYING QUEUE :: ");
    for (int i = q.front; i != q.rear; i = (i + 1) % MAX)
    {
      printf("%d\t", q.queue[i]);
    }
    printf("%d\t", q.queue[q.rear]);
    printf("\n----------------------------------------\n");
    printf("\n\n");
  }
}
