#include <stdio.h>

struct employee
{
  int eid;
  char name[50];
  struct date
  {

    int d, m, y;
  } doj;
}

void main() {

struct employee emp[50];

for(int i = 0; i <= 5; i++)
{
 printf("enter eid:");
 scanf("%d",&emp.eid[i])


}


}