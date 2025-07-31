//Write a program for evaluation of postfix Expression using Stack.

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#define SIZE 100

int TOP=-1;
char s[SIZE];

char pop()
{
   TOP=TOP-1;
   return s[TOP+1];
}
void push(char c)
{
   s[++TOP] = c;
}

void eval_post(char postfix[SIZE]){
    int i=0;
    for(int i=0; i<strlen(postfix);i++){
        if(isdigit(postfix[i])){
            push(postfix[i]-'0');
        }
        else{
           int operand2=pop();
           int operand1=pop();
           switch(postfix[i]){
            case '+':
            push(operand1+operand2);
            break;
            case '-':
            push(operand1-operand2);
            break;
            case '*':
            push(operand1*operand2);
            break;
            case '/':
            push(operand1/operand2);
            break;

            case '^':
            push(pow(operand1,operand2));
            break;
           }
        }
    }
}

void main(){
    char postfix[SIZE];
    printf("Enter a postfix expression :");
    scanf("%s",postfix);
    eval_post(postfix);
    printf("Ans=%d",pop());
}