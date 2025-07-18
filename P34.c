//Write a menu driven program to implement following operations on the Stack 
// using an Array 
// • PUSH, POP, DISPLAY 
// • PEEP, CHANGE 

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int s[SIZE];
int top=-1;

void push(int value){
    if(top>SIZE-1){
       printf("Stack overflow");
       return;
    }

    top=top+1;
    s[top]=value;
}

int pop(){
   if(top==-1){
    printf("Stack Underflow");
    return -1;
   }   
   top--;
   return s[top+1];
}   

void display(){
    for(int i=top;i>=0;i--){
        printf("%d-->",s[i]);
    }
}

int peep(int value){
    if(top-value+1<=0){
        printf("Stack underflow");
        return -1;
    }
    return printf("%d",s[top-value+1]);
}

int change(int value,int n){
    if(top-value+1<=0){
        printf("Stack underflow");
        return -1;
    }
    s[top-value+1]=n;
    return 0;
}
int main(){
   int choice,x;
   while(1){
    printf("Enter 1 to push\n2 to pop\n3 to display\n4 to peep\n5to change\n6 to exit:");
    scanf("%d",&choice);

    switch(choice){
        case 1:{
        int value;
        printf("Enter value:");
        scanf("%d",&value);
        push(value);
        break;
        }

        case 2:{
        x=pop();
        printf("Popped %d from stack",x);
        display();
        break;
        }
        
        case 3:
        display();
        break;

        case 4:{
        int value;
        printf("Enter num from top to display:");
        scanf("%d",&value);
        peep(value);
        break;
        }
        case 5:{
            int value;
            printf("Enter a number from top to change:");
            scanf("%d",&value);
            int n;
            printf("Enter value to be changed:");
            scanf("%d",&n);
            change(value,n);
            break;
        }
        case 6:
        exit(0);
    }
   }
   return 0;
}