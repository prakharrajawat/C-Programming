#include <stdio.h>
#include <string.h>
struct Person
{
  char name[50];
  char eid[60];
  char gen;
  int age;
};

int main()
{

  struct Person p[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Enter name:");
    gets(p[i].name);
    printf("Enter Gender(f for female and m for male):");
    scanf("%c", &p[i].gen);
    printf("Enter Age:");
    scanf("%d", &p[i].age);
    printf("Enter emailid:");
    fflush(stdin);
    gets(p[i].eid);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Informatin of Person[%d] :", i);
    printf("%s\t%c\t%d\t%s", p[i].name, p[i].gen, p[i].age, p[i].eid);
  }
  return 0;
}