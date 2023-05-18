#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList
{
  int i;
  struct LinkedList *next;
} Node;

Node *head = NULL;

void insertAtBeginning(int value)
{
  Node *newnode;
  newnode = (Node *)malloc(sizeof(Node));
  newnode->i = value;
  newnode->next = head;
  head = newnode;
}

void insertAtEnding(int value)
{
  Node *newnode;
  newnode = (Node *)malloc(sizeof(Node));
  newnode->i = value;
  newnode->next = NULL;
  if (head == NULL)
  {
    head = newnode;
  }
  else
  {
    Node *temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }

    temp->next = newnode;
    newnode->next = NULL;
  }
  printf("\n node inserted!!!\n");
}

Node *search(int s)
{
  Node *z = head;
  while (z != NULL)
  {
    if (z->i == s)
      break;
    else
      z = z->next;
  }
  return z;
}

void insertAtAfter(int s, int x)
{
  Node *z;
  z = search(s);
  if (z == NULL)
    printf("node cannot insert");
  else
  {
    Node *k = (Node *)malloc(sizeof(Node));
    k->i = x;
    k->next = z->next;
    z->next = k;
  }
}

void deleteAtBeginning()
{
  Node *delnode = head;
  if (delnode == NULL)
  {
    printf("List is Empty");
  }
  else
  {
    printf("Deleted Node :: %d", delnode->i);
    head = delnode->next;
    free(delnode);
  }
}

void deleteAtEnding()
{
  Node *z = head, *secondLastNode;

  if (head == NULL)
  {
    printf("\n\nList is Empty.\n\n");
  }
  else
  {
    if (z->next == NULL)
    {
      head = NULL;
    }
    else
    {
      while (z->next != NULL)
      {
        secondLastNode = z;
        z = z->next;
      }
      secondLastNode->next = NULL;
    }
    printf("Deleted Node ::%d ", z->i);
    free(z);
  }
}

void deleteAtAfter(int s)
{
  Node *z = search(s);
  if (z == NULL || z->next == NULL)
  {
    printf("Node can't be deleted");
  }
  else
  {
    Node *k;
    k = z->next;
    z->next = k->next;
    free(k);
  }
}

void deleteAllnodes()
{

  if (head == NULL)
  {
    printf("Node Can't Be Deleted");
  }
  else
  {
    Node *temp;
    while (head != NULL)
    {
      temp = head;
      head = head->next;
      free(temp);
    }
    printf("All Nodes Deleted");
  }
}

void display()
{
  Node *z = head;
  if (z == NULL)
  {
    printf("List is empty");
  }
  else
  {
    while (z != NULL)
    {
      printf("%d->", z->i);
      z = z->next;
    }
    printf("NULL");
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
      insertAtAfter(s, value);
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
      deleteAtAfter(s);
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
