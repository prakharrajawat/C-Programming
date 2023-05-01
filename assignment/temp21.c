/*Question 21.
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.
*/

#include <stdio.h>
#include <string.h>
void main()
{
  char word[50], temp;
  int i, n, j, count = 0;
  printf("Enter a word : ");
  scanf("%s", word);
  n = strlen(word);
  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (word[i] > word[j])
      {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
      }
    }
  }
  for (i = 0; i < n - 1; i++)
  {
    if (word[i] == word[i + 1])
    {
      count++;
      while (i < n - 1 && word[i] == word[i + 1])

        i++;
    }
  }
  printf("Number of letters that occur multiple times: %d\n", count);
}