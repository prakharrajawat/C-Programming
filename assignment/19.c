/* Question 19.
Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.
To simplify your program, you can assume that the longest word will not exceed 100 characters.*/

#include <stdio.h>
int longest_Word(int n)
{
  char text[100];
  int i = 0;
  int longest = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%s", text);
    int t = 0;
    while (text[t] != '\0')
      t++;
    if (longest < t)
      longest = t;
  }
  return longest;
}

int main()
{
  int n, long_word;
  scanf("%d", &n);

  long_word = longest_Word(n);
  printf("%d", long_word);

  return 0;
}
