// Removing starts from a string Problem 
// You are given a string s, which contains stars *. In one operation, you can: 
// Choose a star in s. Remove the closest non-star character to its left, as well as 
// remove the star itself. Return the string after all stars have been removed. 
 
// Note :  
// • The input will be generated such that the operation is always possible. 
// • It can be shown that the resulting string will always be unique.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20
char stack[SIZE];
int TOP=-1;
void pop()
{
    if (TOP >= 0) {
        TOP--;
    }
}
void push(char c)
{
    

     if (TOP < SIZE - 1) {
        stack[++TOP] = c;
    }
}

void star_string(char input[SIZE]){
    for(int i=0;i<strlen(input);i++){
        if(input[i]=='*'){
            pop();
        }
        else{
            push(input[i]);
        }
    }
     stack[TOP + 1] = '\0';
    strcpy(input, stack);
}

void main(){
    char input[SIZE];
     printf("Enter a string: ");
     scanf("%s",input);

     TOP=-1;
     star_string(input);
     printf("%s",input);
}