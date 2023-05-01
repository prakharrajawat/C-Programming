/*Question 16. Write a C-program that prints out a word as many times as specified. The number of repetitions and the word should be given as input to the program. You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).*/

#include <stdio.h>
void repeat_word(int repetition);

int main()
{
  int repetition;
  printf("enter no. of repetition :");
  scanf("%d", &repetition);
  repeat_word(repetition);
  return 0;
}

void repeat_word(int repetition)
{
  char word[100];
  printf("enter word :");
  scanf("%s", word);
  for (int i = 0; i < repetition; i++)
  {
    printf("%s\n", word);
  }
}