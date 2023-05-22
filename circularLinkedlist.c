#include <stdio.h>
#include <stdlib.h>

typedef struct circularLinkedList
{
  int i;
  struct circularLinkedList *next;
} Cl;

Cl *head = NULL, *tail = NULL;

void insertAtBeginning(int x)
{
  Cl *newnode = (Cl *)malloc(sizeof(Cl));
  newnode->i = x;
  if (head == NULL)
  {
    newnode->next = head;
    head = tail = newnode;
  }
  else
  {
    newnode->next = head;
    tail->next = newnode;
    head = newnode;
  }
}

void insertAtEnding(int x)
{
  Cl *newnode = (Cl *)malloc(sizeof(Cl));
  newnode->i = x;
  if (head == NULL)
  {
    newnode->next = head;
    head = tail = newnode;
  }
  else
  {
    tail->next = newnode;
    newnode->next = head;
    tail = newnode;
  }
}

void display()
{
  Cl *traverse = head;
  if (head == NULL)
  {
    printf("Circular List is Empty");
  }
  else
  {
    printf("List :: ");
    while (traverse != tail)
    {
      printf("%d->", traverse->i);
      traverse = traverse->next;
    }
    printf("%d", traverse->i);
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
    Cl *z = head;
    printf("Deleted Node :: %d", z->i);
    if (z->next == head)
    {
      head = tail = NULL;
    }
    else
    {
      head = z->next;
      tail->next = head;
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
    Cl *z = head;
    if (z == tail)
    {
      head = NULL;
    }
    else
    {
      Cl *secondLastNode;
      while (z->next != head)
      {
        secondLastNode = z;
        z = z->next;
      }
      secondLastNode->next = head;
      tail = secondLastNode;
    }
    printf("Deleted Node :: %d", z->i);
    free(z);
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
    Cl *z;
    printf("Deleted Nodes are :: ");
    while (head != tail)
    {
      z = head;
      printf("%d ", z->i);
      head = head->next;
      free(z);
    }
    z = tail;
    printf("%d", z->i);
    free(z);
    head = tail = NULL;
  }
  printf("\nAll noded deleted");
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
    printf("2. Insert At End\n");
    printf("3. Insert At After\n");
    printf("4. Display \n");
    printf("5. Delete At Beginning \n");
    printf("6. Delete At Ending \n");
    printf("7. Delete At After \n");
    printf("8. Delete All Nodes\n");
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
      printf(" Enter value for Searching  and inserting into Node :: ");
      scanf("%d %d", &s, &value);
      // insertAtAfter(s, value);
      break;
    case 4:
      display();
      break;
    case 5:
      deleteAtBeginning();
      break;
    case 6:
      deleteAtEnding();
      break;
    case 7:
      printf(" Enter value for Searching :: ");
      scanf("%d", &s);
      // deleteAtAfter(s);
      break;
    case 8:
      deleteAllnodes();
      break;
    case 9:
      exit(0);
    default:
      printf("-------------------\n");
      printf(" Invalid Operation :: \nEnter choice 1/2/3/4 \n");
      printf("-------------------\n");
    }
  }
  return 0;
}
