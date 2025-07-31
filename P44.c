// Write a program for evaluation of prefix Expression using Stack. 

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
void eval_pre(char prefix[SIZE]){
    int i=0;
    for(int i=0; i<strlen(prefix);i++){
        if(isdigit(prefix[i])){
            push(prefix[i]-'0');
        }
        else{
           int operand1=pop();
           int operand2=pop();
           switch(prefix[i]){
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
    char prefix[SIZE];
    printf("Enter a prefix expression :");
    scanf("%s",prefix);
    strrev(prefix);
    eval_pre(prefix);
    printf("ANS=%d",pop());
}