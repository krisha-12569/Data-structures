// A balanced parenthesis string is defined as follows:
// • The empty string is balanced
// • If P is balanced then (P), {P}, [P] is also balanced
// • if P and Q are balanced PQ is also balanced
// • "([])", "({})[()]" are balanced parenthesis strings
// • "([{]})", "())" are not balanced.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20
char input[SIZE];
int TOP = -1;
char s[SIZE];
char open, close, c;

void push(char c)
{
    if (TOP == SIZE - 1)
    {
        printf("Stack overflow");
        return;
    }

    TOP = TOP + 1;
    s[TOP] = c;
}

char pop()
{
    if (TOP == -1)
    {
        printf("Stack Underflow");
        return -1;
    }
    TOP--;
    return s[TOP + 1];
}

char isMatching(char open, char close)
{
    return (open == '(' && close == ')' ||
            open == '[' && close == ']' ||
            open == '{' && close == '}');
}


int valid(char input[]){
      for(int i = 0; input[i] != '\0'; i++){
       if(input[i] != ')' && input[i] != '}' && input[i] != ']'){
        push(input[i]);
       }
       else {
        char next = input[i];
        char x = pop();
        if(!isMatching(x,next)){
            return 0;
        }
       }
    }
    return TOP==-1;
}    
void main()
{
    printf("Enter a string:");
    scanf("%s", input);

    
        
     if(valid(input)){
        printf("valid");
    }
    else{
        printf("Invalid");
    }
}