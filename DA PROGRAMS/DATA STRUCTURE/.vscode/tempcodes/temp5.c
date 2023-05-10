#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
  int i;
  struct list *n;
} list;

list *h = NULL;
void insert_at_beg();
void insert_at_end();
list *search();
void insert_at_after();
void delete_at_beg();
void delete_at_end();
void delete_at_after();
void display();
int main()
{
  int s;
  int choice, x;
  while (1)
  {
    printf("****LINERA LINKED LIST OPERATIONS*****\n");
    printf("1. INSERT AT BEGINING\n");
    printf("2. INSERT AT ENDIND\n");
    printf("3. INSERT AT AFTER(MIDDLE)\n");
    printf("4. DELETE AT BEGINING\n");
    printf("5. DELETE AT END\n");
    printf("6. DELETE AT AFTER(MIDDLE)\n");
    printf("7. DISPLAY\n");
    printf("8. EXIT\n");
    printf("Enter your choice :: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:

      printf("enter the elements:\n");
      scanf("%d", &x);
      insert_at_beg(x);
      break;

    case 2:

      printf("enter the elements:\n");
      scanf("%d", &x);
      insert_at_end(x);
      break;

    case 3:

      printf("search the elements:\n");
      scanf("%d", &s);
      printf("enter the element to insert:\n");
      scanf("%d", &x);
      insert_at_after(s, x);
      break;

    case 4:

      delete_at_beg();
      break;

    case 5:

      delete_at_end();
      break;

    case 6:
      printf("enter the element to search:\n");
      scanf("%d", &s);
      search(s);
      delete_at_after(s);
      break;

    case 7:

      display();
      break;

    case 8:

      exit(1);
      printf("*****exit****");
    }
  }
  return 0;
}
void insert_at_beg(int x)
{

  list *t;
  t = (list *)malloc(sizeof(list));
  t->i = x;
  t->n = h;
  h = t;
}
void insert_at_end(int x)
{
  list *t;
  t = (list *)malloc(sizeof(list));
  t->i = x;
  if (h == NULL)
    h = t;
  else
  {
    list *z = h;
    while (z->n != NULL)
      z = z->n;
    z->n = t;
  }
}
list *search(int x)
{
  list *z = h;
  while (z != NULL)
  {
    if (z->i == x)
      break;
    else
      z = z->n;
  }
  return z;
}
void insert_at_after(int s, int x)
{
  list *z = search(s);
  if (z == NULL)
    printf("node cannot insert");
  else
  {
    list *k = (list *)malloc(sizeof(list));
    k->i = x;
    z->n = k->n;
    z->n = k;
  }
}
void delete_at_beg()
{
  list *z = h;
  if (z == NULL)
    printf("list is empty");
  else
  {
    h = h->n;
    printf("node is deleted:%d", z->i);
    free(z);
  }
}
void delete_at_end()
{
  list *z = h;
  if (z == NULL)
    printf("list is empty");
  else
  {
    if (z->n == NULL)
      h = NULL;
    else
    {
      list *k;
      while (z->n != NULL)
      {
        k = z;
        z = z->n;
      }
      printf("node is deleted:%d", z->i);
      k->n = z->n;
      free(z);
    }
  }
}
void delete_at_after(int s)
{
  list *z;
  z = search(s);
  if ((z == NULL) || (z->n == NULL))
    printf("deletion not possible");
  else
  {
    list *k;
    k = z->n;
    z->n = k->n;
    free(k);
  }
}

void display()
{
  list *temp = h;
  if (temp == NULL)
  {
    printf("List is empty");
  }
  else
  {
    while (temp->n != NULL)
    {
      printf("%d\n", temp->i);
      temp = temp->n;
    }
  }
}