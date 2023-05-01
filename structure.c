#include <stdio.h>
#include <string.h>
typedef struct student
{
  int roll;
  float cgpa;
  char name[100];
} stu;

void printinfo(struct student ece);

int main()
{
  struct student ece = {1664, 9.3, "prakhar"};
  stu
      printinfo(ece);
  // struct student *ptr = &ece;
  // printf("student roll = %d", ptr->roll);
  // printf("student cgpa = %f", ptr->cgpa);
  // printf("student name = %s", ptr->name);

  return 0;
}
void printinfo(struct student ece)
{
  printf("student roll = %d\n", ece.roll);
  printf("student cgpa = %0.2f\n", ece.cgpa);
  printf("student name = %s\n", ece.name);
}