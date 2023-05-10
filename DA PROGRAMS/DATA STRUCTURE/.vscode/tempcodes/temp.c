#include <stdio.h>
#define max 5
struct stack
{
  int a[max];
  int top;
} s;
void push(int);
void pop();
void display();
void main()
{
  s.top = -1;
  int i, x, ch;
  do
  {
    printf("\n**menu*\n");
    printf("1-push\n");
    printf("2-pop\n");
    printf("3-display\n");
    printf("4-exit\n");
    printf("*****\n");
    printf("enter your choice =");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
      printf("enter the element =");
      scanf("%d", &x);
      push(x);
      break;
    }
    case 2:
    {
      pop();
      break;
    }
    case 3:
    {
      display();
      break;
    }
    default:
      if (ch > 4)
        printf("invalid choice");
    }
  } while (ch != 4);
}
void push(int c)
{
  if (s.top == max - 1)
    printf("\noverflow");
  else
  {
    s.top++;
    s.a[s.top] = c;
    printf("element is added\n");
  }
}
void pop()
{
  int c;
  if (s.top == -1)
    printf("\nunderflow");
  else
  {
    c = s.a[s.top];
    s.top--;
    printf("element deleted :: %d\n", c);
  }
}
void display()
{
  int i;
  for (i = s.top; i >= 0; i--)
    printf("%d\t", s.a[i]);
}