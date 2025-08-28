#include<stdio.h>
#include<stdlib.h>
#define N 100

struct node{
    int data;
    int priority;
};

struct node PQ[N];
int front=-1;
int rear=-1;

void enqueue(int x,int y){
     if(rear>=N-1){
        printf("Priority Queue Overflow");
        return;
     }

     rear++;
     PQ[rear].data=x;
     PQ[rear].priority=y;

     if(front==-1){
        front=0;
     }
}

void dequeue(){
    if(front==-1){
        printf("Priority Queue Underflow..");
        return;
    }
    int highest_index=front;
    for(int i=front+1;i<=rear;i++){
        if(PQ[i].priority>PQ[highest_index].priority){
            highest_index=i;
        }
    }

    printf("Dequeued element : %d(priority %d)",PQ[highest_index].data,PQ[highest_index].priority);

    for(int i=highest_index;i<=rear;i++){
        PQ[i]=PQ[i+1];
    }

    rear--;
}

void display(){
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }

    printf("Priority Queue :\n");
    for(int i=front;i<=rear;i++){
        printf("Data : %d | Priority : %d\n",PQ[i].data,PQ[i].priority);
    }
}
void main(){
    int choice,value,prio;
    while(1){
        printf("Enter 1 to enqueue :\n");
        printf("Enter 2 to dequeue : \n");
        printf("Enter 3 to display :\n");
        printf("Enter 4 to exit : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter data : ");
            scanf("%d",&value);
            printf("Enter priority : ");
            scanf("%d",&prio);
            enqueue(value,prio);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;
            case 4:
            exit(0);

        }
    }
}