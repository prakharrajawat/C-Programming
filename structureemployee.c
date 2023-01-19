// WAP to Print Employee details(employee id , employee name(name (first,middle,last)), employee date of joining(in date,month ,year)using nested structure.
#include <stdio.h>

struct name
{
  char fname[40];
  char mname[40];
  char lname[40];
} fml;

struct date
{
  int d, m, y;
} doj;

struct employee
{
  unsigned int eid;
  struct name fml;
  struct date doj;
} emp;

int main()
{

  printf("!-----Enter Employee Details:-----!\n");
  printf("Enter Employee eid : ");
  scanf("%u", &emp.eid);
  printf("Enter Employee name 0: ");
  scanf("%s%s%s", emp.fml.fname, emp.fml.mname, emp.fml.lname);
  printf("Enter Employee Date of Joining : ");
  scanf("%d%d%d", &emp.doj.d, &emp.doj.m, &emp.doj.y);
  printf("------------------------------------\n");

  printf("--Employee Details:--\n");
  printf("\nEmployee ID : %u", emp.eid);
  printf("\nEmployee Name : %s %s %s ", emp.fml.fname, emp.fml.mname, emp.fml.lname);
  printf("\nEmployee DOJ : %d/%d/%d", emp.doj.d, emp.doj.m, emp.doj.y);

  return 0;
}
