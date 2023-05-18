#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyLinkedlist
{
  int i;
  struct DoublyLinkedlist *prev;
  struct DoublyLinkedlist *next;
} Dl;

Dl *head, *tail;
void init()
{
  head = tail = NULL;
}

void insertAtBeginning(int x)
{
  Dl *newnode = (Dl *)malloc(sizeof(Dl));
  newnode->i = x;
  if (head == NULL)
  {
    newnode->next = newnode->prev = NULL;
    head = tail = newnode;
  }
  else
  {
    newnode->next = head;
    head->prev = newnode;
    newnode->prev = NULL;
    head = newnode;
  }
}

void insertAtEnding(int x)
{
  Dl *newnode = (Dl *)malloc(sizeof(Dl));
  newnode->i = x;
  if (head == NULL)
  {

    newnode->next = newnode->prev = NULL;
    head = tail = newnode;
  }
  else
  {
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = NULL;
    tail = newnode;
  }
}

Dl *searchNode(int s)
{
  Dl *z = head;
  while (z->next != NULL)
  {
    if (z->i == s)
    {
      break;
    }
    else
    {
      z = z->next;
    }
  }
  return z;
}

void insertAtAfter(int s, int x)
{
  Dl *z = searchNode(s);

  if (z == NULL)
  {
    printf("Insertion not possible");
  }
  else
  {
    Dl *newnode = (Dl *)malloc(sizeof(Dl));
    newnode->i = x;
    if (z == tail || z->next == NULL)
    {

      newnode->prev = tail;
      newnode->next = NULL;
      z->next = newnode;
      tail = newnode;
    }
    else
    {
      newnode->next = z->next;
      z->next->prev = newnode;
      newnode->prev = z;
      z->next = newnode;
    }
  }
}

void insertAtBefore(int s, int x)
{
  Dl *z = searchNode(s);
  if (z == NULL)
  {
    printf("Insertion not possible");
  }
  else
  {
    Dl *newnode = (Dl *)malloc(sizeof(Dl));
    newnode->i = x;
    if (z == head || z->next == NULL)
    {
      z->prev = newnode;
      newnode->next = z;
      newnode->prev == NULL;
      head = newnode;
    }
    else
    {
      z->prev->next = newnode;
      newnode->prev = z->prev;
      z->prev = newnode;
      newnode->next = z;
    }
  }
}

void Display()
{
  Dl *traverse = head;
  if (head == NULL)
  {
    printf("List is Empty");
  }
  else
  {
    while (traverse != NULL)
    {
      printf("%d->", traverse->i);
      traverse = traverse->next;
    }
    printf("NULL");
  }
}

void deleteAtBeginning()
{
  if (head == NULL)
  {
    printf("List is Empty");
  }
  else
  {
    Dl *z = head;
    if (z->next == NULL)
    {
      head = NULL;
    }
    else
    {
      z->next->prev = NULL;
      head = z->next;
    }
    free(z);
  }
}

void deleteAtEnding()
{
  if (head == NULL)
  {
    printf("List is Empty");
  }
  else
  {
    Dl *z = head;
    if (z->next == NULL)
    {
      head = NULL;
    }
    else
    {
      while (z->next != NULL)
      {
        z = z->next;
      }
      z->prev->next = NULL;
    }
    printf("Deleted Node :: %d", z->i);
    free(z);
  }
}

void deleteAtAfter(int s)
{

  Dl *z = searchNode(s);
  if (z == NULL || z == tail)
  {
    printf("Deletion Not possible");
  }
  else
  {
    Dl *temp = z->next;
    if (z->next == tail)
    {
      z->next = NULL;
      tail = z;
    }
    else
    {
      temp->next->prev = z;
      z->next = temp->next;
    }
    printf(" Deleted Node :: %d", temp->i);
    free(temp);
  }
}

void deleteAtBefore(int s)
{
  Dl *z = searchNode(s);
  if (z->prev == NULL || z == NULL)
  {
    printf("Deletion not possible");
  }
  else
  {
    Dl *k;
    k = z->prev;

    if (z->prev == head)
    {
      z->prev = NULL;
      head = z;
    }
    else
    {
      k->prev->next = z;
      z->prev = k->prev;
    }
    printf(" Deleted Node :: %d", k->i);
    free(k);
  }
}

void deleteAllnodes()
{

  if (head == NULL)
  {
    printf("List is Empty");
  }
  else
  {
    Dl *temp;
    while (head != NULL)
    {
      temp = head;
      head = head->next;
      free(temp);
    }
  }
}

int main()
{
  int value, s;
  int choice;
  while (1)
  {
    printf("\n");
    printf("------------------------------------\n");
    printf("        xxxxxxx MENU xxxxxxx \n");
    printf("------------------------------------\n");
    printf("1. Insert At Beginning\n");
    printf("2. Insert At Ending\n");
    printf("3. Insert At After\n");
    printf("4. Insert At Before\n");
    printf("5. Display List \n");
    printf("6. Delete At Beginning \n");
    printf("7. Delete At Ending \n");
    printf("8. Delete At After \n");
    printf("9. Delete At Before\n");
    printf("10. Delete All Nodes\n");
    printf("0. Exit Operations ");
    printf("\n------------------------------------\n");
    printf("\nEnter your choice :: ");
    scanf("%d", &choice);
    system("cls");
    switch (choice)
    {
    case 1:
      printf(" Enter value for inserting into Node :: ");
      scanf("%d", &value);
      insertAtBeginning(value);
      printf("** Value Inserted **\n\n\n");
      break;
    case 2:
      printf(" Enter value for inserting into Node :: ");
      scanf("%d", &value);
      insertAtEnding(value);
      printf("** Value Inserted **\n\n\n");
      break;
    case 3:
      printf(" Enter value for Searching  and inserting after a Node :: ");
      scanf("%d %d", &s, &value);
      insertAtAfter(s, value);
      break;
    case 4:
      printf(" Enter value for Searching  and inserting Before a Node :: ");
      scanf("%d %d", &s, &value);
      insertAtBefore(s, value);
      break;
    case 5:
      Display();
      break;
    case 6:
      deleteAtBeginning();
      break;
    case 7:
      deleteAtEnding();
      break;
    case 8:
      printf(" Enter value for Searching :: ");
      scanf("%d", &s);
      deleteAtAfter(s);
      break;
    case 9:
      printf(" Enter value for Searching :: ");
      scanf("%d", &s);
      deleteAtBefore(s);
      break;
    case 10:
      deleteAllnodes();
      break;
    case 0:
      exit(0);
    default:
      printf("-------------------\n");
      printf(" Invalid Operation :: \nEnter choice 1/2/3/4 \n");
      printf("-------------------\n");
    }
  }
  return 0;
}
