// Write a menu driven program to implement following operations on the Queue 
// using an Array 
// • ENQUEUE 
// • DEQUEUE 
// • DISPLAY 

#include<stdio.h>
#define SIZE 100
int R=-1;
int F=-1;
int Q[SIZE];

void enqueue(int data){
    if(R>=SIZE){
        printf("Queue Overflow");
        return;
    }
    R++;
    Q[R]=data;
    if(F==-1){
        F=0;
        return;
    }
}

int dequeue(){
    if(F==-1){
        printf("Queue Underflow");
        return -1;
    }
    int Y;
    Y=Q[F];
    if(F==R){
        F=-1;
        R=-1;
    }
    else{
       F++;
    }
    printf(" %d Deleted successfully",Y);
    return(Y);
}

void display(){
    if(F==-1){
        printf("Queue Underflow");
        return;
    }
    for(int i=F;i<=R;i++){
        printf("%d-->",Q[i]);
    }
}
void main(){
    int choice,data,x;
    while(1){
        printf("Enter 1 to enqueue : \n");
        printf("Enter 2 to dequeue : \n");
        printf("Enter 3 to display : \n");
        printf("Enter 4 to exit : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter data to be inserted : ");
            scanf("%d",&data);
            enqueue(data);
            break;

            case 2:
            x=dequeue();
            break;

            case 3:
            display();
            break;
            
            case 4:
            exit(0);
        }
    }
}