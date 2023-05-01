#include <stdio.h>
// Function to check if a temperature is within the safe range
int check_temperature(int temperature, int min_temp, int max_temp)
{
  if (temperature < min_temp && temperature > max_temp)
  {
    printf("Alert!\n");
    return 1; // Return 1 to indicate an unsafe temperature was detected
  }
  else
  {
    return 0; // Return 0 to indicate a safe temperature was detected
  }
}

int main()
{
  int min_temp, max_temp, temperature;
  // Read the minimum and maximum safe temperatures
  scanf("%d %d", &min_temp, &max_temp);
  // Read temperatures until the chemical reaction is complete (temperature of -999)
  while (1)
  {
    scanf("%d", &temperature);
    if (temperature == -999)
    {
      break;
    }
    else if (check_temperature(temperature, min_temp, max_temp))
    {
      break;
    }
    else
    {
      printf("Nothing to report\n");
    }
  }
  return 0;
}

// 10 20
// 15 10 20 0 15 -999

// 0 100
// 15 50 75 -999
