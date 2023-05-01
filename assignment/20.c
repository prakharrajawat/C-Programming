/*Question 20.
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.
*/
#include <stdio.h>
int main()
{
  char word[51];
  int lw = 0;
  scanf("%s", word);
  while (word[lw] != '\0')
    lw++;
  int mid_pt = lw / 2 + lw % 2;

  int i;
  int found = -1;
  for (i = 0; i < lw; i++)
  {
    if (word[i] == 't' || word[i] == 'T')
    {
      found = 1;
    }
    if (i > mid_pt && (word[i] == 't' || word[i] == 'T'))
    {
      found = 2;
    }
  }
  printf("%d\n", found);
  return 0;
}