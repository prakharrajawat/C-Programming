/*Question 15.University chemists have developed a new process for the manufacturing of a drug that heals wounds extremely quickly. The manufacturing process is very lengthy and requires monitoring the chemicals at all times, sometimes for hours! Entrusting this task to a student is not possible; students tend to fall asleep or not pay close attention after a while. Therefore you need to program an automatic device to monitor the manufacturing of the drug. The device measures the temperature every 15 seconds and provides these measurement to your program.
Your program should first read two integers representing the minimum and maximum safe temperatures. Next, your program should continuously read temperatures (integers) that are being provided by the device. Once the chemical reaction is complete the device will send a value of -999, indicating to you that temperature readins are done. For each recorded temperature that is in the correct range (it could also be equal to the min or max values), your program should display the text "Nothing to report". But as soon as a temperature reaches an unsafe level your program must display the text "Alert!" and stop reading temperatures (although the device may continue sending temperature values).
*/

#include <stdio.h>
void experiment(int min_temp, int max_temp);
int main()
{
  int min_temp, max_temp, temp;
  printf("enter minimum temperature :");
  scanf("%d", &min_temp);
  printf("enter maximum temperature:");
  scanf("%d", &max_temp);
  experiment(min_temp, max_temp);
  return 0;
}
void experiment(int min_temp, int max_temp)
{
  int temp;
  for (temp = 0; temp != -999; temp++)
  {
    scanf("%d", &temp);
    if (temp == -999)
    {
      break;
    }
    else if (temp >= min_temp && temp <= max_temp)
    {
      printf("Nothing to report\n");
    }
    else
    {
      printf("Alert!\n");
    }
  }
}