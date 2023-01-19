// #include <stdio.h>
// int main()
// {
//   int a;

//   for (int a = 0; a <= 20; a++)

//     if (a >= 10)
//     {

//       printf("value of i: %d\n", a);
//     }

#include <stdio.h>
int main()
{
  int i = 0;
  while (i <= 20)
  {
    if (i >= 10)
      printf("The value of i is %d\n", i);
    i++;
  }

  return 0;
}
