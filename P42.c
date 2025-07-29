//Write a program to convert infix notation to prefix notation using stack.

#include<stdio.h>
#include<string.h>
#define SIZE 20
int TOP = -1;
char s[SIZE];
char POLISH[SIZE];
int rank = 0;

void reversestring(char infix[SIZE]){
    int n = strlen(infix);
    for (int i = 0; i < n / 2; i++) {
        char temp = infix[i];
        infix[i] = infix[n - i - 1];
        infix[n - i - 1] = temp;
    }
    for (int i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

}
int F(char c)
{
   if (c == '+' || c == '-')
   {
      return 2;
   }
   else if (c == '*' || c == '/')
   {
      return 4;
   }
   else if (c == '^')
   {
      return 5;
   }
   else if (c == '(')
   {
      return 9;
   }
   else if (c == ')')
   {
      return 0;
   }
   else
   {
      return 7;
   }
}

int G(char c)
{
   if (c == '+' || c == '-')
   {
      return 1;
   }
   else if (c == '*' || c == '/')
   {
      return 3;
   }
   else if (c == '^')
   {
      return 6;
   }
   else if (c == '(')
   {
      return 0;
   }
   else
   {
      return 8;
   }
}

char pop()
{
   TOP=TOP-1;
   return s[TOP+1];
}
void push(char c)
{
   s[++TOP] = c;
}
int R(char c)
{
   if (c == '+' || c == '-' || c == '*' || c == '/')
   {
      return -1;
   }
   else
   {
      return 1;
   }
}
void rev_polish(char infix[])
{
   char next;
   int j = 0;
   int i = 0;
   char temp;
   push('(');
   strcat(infix, ")"); 
   
   while (i!= strlen(infix))
   {
      next=infix[i];
      if (TOP < 0)
      {
         printf("Invalid ");
         return;
      }

      while (G(s[TOP]) > F(next))
      {
         temp = pop();
         POLISH[j++] = temp;
         rank = rank + R(temp);

         if (rank < 1)
         {
            printf("Invalid");
            return;
         }
      }

      if (G(s[TOP]) != F(next))
      {
         push(next);
      }
      else
      {
         temp = pop();
      }
      i++;
   }
   POLISH[j] = '\0';
   if (TOP != -1 || rank != 1)
      printf("Invalid");
   else
   {
    reversestring(POLISH);
      printf("Prefix Expression: %s", POLISH);
   }
}

void main(){
    char infix[SIZE];
    printf("Enter an infix expression : ");
    scanf("%s",infix);
    reversestring(infix);
   
    rev_polish(infix);
    
}