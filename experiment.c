// #include <stdio.h>

// void main()
// {

//   int min, max, temp;

//   printf("enter minimum temperature :");
//   scanf("%d", &min);

//   printf("enter maximum temperature:");
//   scanf("%d", &max);

//   for (temp = 0; temp != -999; temp++)
//   {
//     scanf("%d", &temp);

//     if (temp >= min && temp <= max)
//     {
//       printf("Nothing to report\n");
//     }
//     else
//     {
//       printf("Alert\n");
//       break;
//     }
//   }
// }

#include <stdio.h>

int main(void)
{

  int min_temp, max_temp;
  printf("Enter minimum safe temperature: ");
  scanf("%d", &min_temp);
  printf("Enter maximum safe temperature: ");
  scanf("%d", &max_temp);

  int temp;
  while (1)
  {
    printf("Enter temperature reading: ");
    scanf("%d", &temp);

    if (temp < min_temp || temp > max_temp)
    {
      printf("Alert!\n");
      break;
    }
    if (temp == -999)
    {
      break;
    }

    printf("Nothing to report\n");
  }

  return 0;
}