/*Question 21.
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.
*/
#include <stdio.h>
int main(void)
{
  char word[51];
  int i, j;
  int n;
  int reps = 0;
  scanf("%s", word);

  i = 0;
  while (word[i] != '\0')
    i++;
  n = i;
  char temp;

  for (j = 0; j < n; j++)
  {
    for (i = 0; i < n - 1; i++)
    {
      if (word[i] > word[i + 1])
      {
        temp = word[i];
        word[i] = word[i + 1];
        word[i + 1] = temp;
      }
    }
  }

  char previous = ' ';
  for (i = 0; i < n - 1; i++)
  {
    if (word[i] == word[i + 1] && (word[i] != previous))
    {
      reps++;
    }
    previous = word[i];
  }
  printf("%d\n", reps);
  return 0;
}