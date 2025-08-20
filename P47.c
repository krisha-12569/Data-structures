// Write a menu driven program to implement following operations on a circular 
// queue using an Array 
// • Insert 
// • Delete 
// • Display all elements of the queue 

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
int R=-1;
int F=-1;
int Q[SIZE];

void insert(int value){
    if((R+1)%SIZE == F){
         printf("Circular Queue Overflow");
         return;
    }
    if (F == -1) { 
        F = 0;
    }
    R=(R+1)%SIZE;
    Q[R] = value;
    printf("%d Inserted Successfully\n", value);
}

int delete(){
    if(F==-1){
        printf("Circular Queue Underflow ");
        return -1;
    }
    int Y=Q[F];

    if(F==R){
        F=-1;
        R=-1;
    }
    else if(F==SIZE-1){
        F=0;
    }
    else{
        F++;
    }
    printf("%d Deleted Sucessfully",Y);
    return Y;
}
void display(){
    int i=F;
    while(1){
        printf("%d-->",Q[i]);
        if(i==R){
            break;
        }
        i=(i+1)%SIZE;
    }
}
void main(){
    int choice,data;
    while(1){
        printf("Enter 1 to insert in circular queue : \n");
        printf("Enter 2 to delete in circular queue : \n");
        printf("Enter 3 to display in circular queue : \n");
        printf("Enter 4 to exit:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter data : ");
            scanf("%d",&data);
            insert(data);
            break;

            case 2:
             delete();
             break;

             case 3:
             display();
             break;

             case 4:
             exit(0);
        }
    }
}