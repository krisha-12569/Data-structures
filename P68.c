//Write a program to swap two consecutive nodes in the linked list. Don’t change 
//the values of nodes, implement by changing the link of the nodes.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first=NULL;

struct node *insertelements(int data){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
      
    newNode->info=data;
    newNode->link=NULL;

    if(first==NULL){
        first=newNode;
    }
    else{
        struct node *save=first;
        while(save->link!=NULL){
             save = save->link;
        }
        save->link=newNode;
    }
    return first;
}

void swapping(struct node * first){
    
    struct node *p=first;
    struct node *q=p->link;
    
    struct node * temp;
    while(p!=NULL){

        temp=q->link;
        p->link=q->link;
        q->link=p;

        printf("%d",q->info);
        printf("%d",p->info);

        p=temp;
        q=p->link;
        
    }
}


void display(){
    struct node * save=first;

    while(save!=NULL){
        printf("%d-->",save->info);
        save=save->link;  
    }
}

int main(){
    int data;
      
    printf("enter -1 to stop: \n");
    while(1){

        printf("enter data: ");
        scanf("%d",&data);
        
        if(data==-1){
            break;
        }

        insertelements(data);
    }
    printf("Original list:\n");
    display();
    printf("\n");
    
    printf("Swapped list:\n");
    swapping(first);
    display();
 
    return 0;
}