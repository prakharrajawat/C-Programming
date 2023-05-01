/*Question 20.
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.
*/

#include <stdio.h>
#include <string.h>
void main()
{
  char word[50];
  int a, i, f1, f2;
  printf("enter a word =");
  scanf("%s", word);
  a = strlen(word) / 2; // a = half length
  for (i = 0; i <= a; i++)
  {
    if (word[i] == 't' || word[i] == 'T')
    {
      f1 = 1;
      break;
    }
  }
  for (i = a + 1; i < strlen(word); i++)
  {
    if (word[i] == 't' || word[i] == 'T')
    {
      f2 = 1;
      break;
    }
  }
  if (f1 == 1)
    printf("1");
  else if (f2 == 1)
    printf("2");
  else
    printf("-1");
}