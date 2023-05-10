#include <stdio.h>
#include <stdlib.h>
typedef struct List
{
  int i;
  struct List *n;
} list;

list *h = NULL;

void insertatbeg(int x)
{
  list *t;
  t = (list *)malloc(sizeof(list));
  t->i = x;
  t->n = h;
  h = t;
}
void insertatend(int x)
{
  list *t;
  t = (list *)malloc(sizeof(list));
  t->i = x;

  if (h == NULL)
    h = t;
  else
  {
    list *z = h;
    while (z != NULL)
    {
      z = z->n;
    }
    z->n = t;
  }
}
list *search(int x)
{
  list *z = h;
  while (z->n != NULL)
  {
    if (z->i = x)
      break;
    else
      z = z->n;
  }
  return z;
}
void insertaft(int s, int x)
{
  list *z;
  z = search(s);
  if (z == NULL)
    printf("Node cannot be inserted");
  else
  {
    list *k;
    k->i = x;
    k->n = z->n;
    z->n = k;
  }
}
void deleteatbeg()
{
  list *z = h;
  if (z == NULL)
    printf("List is Empty");
  else
  {
    h = h->n;
    printf("Deleted Node is:%d", z->i);
    free(z);
  }
}
void deleteatend()
{
  list *z = h;
  if (z == NULL)
    printf("List is Empty");
  else
  {
    printf("Deleted node is:%d", z->i);
    if (z->n = NULL)
      h = NULL;
    else
    {
      list *k = z;
      while (z->n != NULL)
      {
        k = z;
        z = z->n;
      }
      printf("Deleted Node is:%d", z->i);
      free(z);
      k->n = NULL;
    }
  }
}
void deleteaft(int s)
{
  list *z;
  z = search(s);
  if (z == NULL || z->n == NULL)
    printf("Deletion is Not Possiblel");
  else
  {
    list *k;
    k = z->n;
    z->n = k->n;
    printf("Deleted node is: %d", k->i);
    free(k);
  }
}
void display()
{
  list *z = h;
  if (z == NULL)
    printf("List is empty");
  else
  {
    while (z != NULL)
    {
      printf("%d\n", z->i);
      z = z->n;
    }
  }
}
int main()
{
  int choice, item, num;
  while (1)
  {
    printf("\n*********LinkedList-Operations*********\n");
    printf("1.Insert at Beginning\n");
    printf("2.Insert at Ending\n");
    printf("3.Insert at After\n");
    printf("4.Search\n");
    printf("5.Delete at Beginning\n");
    printf("6.Delete at Ending\n");
    printf("7.Delete After\n");
    printf("8.Display\n");
    printf("9.Quit\n");
    printf("********************\n");
    printf("Enter your Choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the item to be inserted:");
      scanf("%d", &item);
      insertatbeg(item);
      break;
    case 2:
      printf("Enter the item to be inserted:");
      scanf("%d", &item);
      insertatend(item);
      break;
    case 3:
      printf("Enter the item to be inserted after:");
      scanf("%d", &num);
      printf("Enter the item to be inserted:");
      scanf("%d", &item);
      insertaft(num, item);
      break;
    case 4:
      printf("Enter the item to be searched:");
      scanf("%d", &item);
      search(item);
      break;
    case 5:
      deleteatbeg();
      break;
    case 6:
      deleteatend();
      break;
    case 7:
      printf("Enter the item to be deleted after:");
      scanf("%d", &item);
      deleteaft(item);
      break;
    case 8:
      display();
      break;
    case 9:
      exit(1);
    }
  }
  return 0;
}