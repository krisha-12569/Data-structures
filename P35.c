// How stack can be used to recognize strings aca, bcb, abcba, abbcbba? Write a 
//program to solve the above problem.

#include<stdio.h>

int top=-1;
char stack[100];
char next;
int i = 0;

void push(char x)
{
    
    top++;
    stack[top] = x;
}

int pop()
{
    if (top == -1)
    {
        printf("underflow");
        return -1;
    }
    top--;
    return stack[top + 1];
}

char nextChar(char str[100]){
      

    if (str[i] != '\0') {
        return str[i++];
    } else {
        return '\0';  
    }
}

void check(char str[100]){
    top=0;
    stack[top]='c';
    char x;

    next=nextChar(str);

    while(next!='c'){
        if(next=='\0'){
            printf("Invalid string");
        }
        else{
            push(next);
            next=nextChar(str);
        }
    }

    while(stack[top]!='c'){
        next=nextChar(str);
        x=pop();
        if(next!=x){
            printf("invalid");
        }
    }

    next=nextChar(str);
    if(next=='\0'){
        printf("valid");
    }
    else{
        printf("invalid");
    }

}

int main()
{
    char str[100];
    printf("enter string: ");
    scanf("%s", str);

    check(str);



    return 0;
}