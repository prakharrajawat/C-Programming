// WAP to find out whether a student is pass or fail, if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user.

#include <stdio.h>

int main()
{

  int phy, chem, math;
  float per, total;

  printf("enter marks (physics):");
  scanf("%d", &phy);
  printf("enter marks (maths):");
  scanf("%d", &math);
  printf("enter marks (chemistry):");
  scanf("%d", &chem);

  total = phy + chem + math;

  per = (total / 300) * 100;

  if ((phy > 33 && chem > 33 && math > 33) && (per > 40))
  {
    printf("pass");
  }
  else
  {
    printf("fail");
  }
}