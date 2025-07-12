//Write a program to sort elements of a linked list. 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node * link;    
};

struct node * first=NULL;

struct node * insert(int data){
    struct node * newNode=(struct node *)malloc(sizeof(struct node));
    newNode->info=data;
    newNode->link=NULL;

    if(first==NULL){
        first=newNode;
    }
    else{
        struct node *save=first;

        while(save->link!=NULL){
            save=save->link;
        }

        save->link=newNode;
    }
    return first;
}

struct node * sort(struct node * first){
    struct node *i,*j;
    int temp;

    for(i=first;i->link!=NULL;i=i->link){
        for(j=i->link;j!=NULL;j=j->link){

            if(i->info > j->info){
                temp=i->info;
                i->info=j->info;
                j->info=temp;
            }
        }
    }
    return first;
}

void printLinkedList(struct node *first){
   struct node * save=first;
    while(save!=NULL){

        printf("%d\n",save->info);
        save=save->link;
        
    }
    
}

void main(){
    int data;
    
    printf("enter -1 to stop: \n");
    while(1){

        printf("enter data: ");
        scanf("%d",&data);
        
        if(data==-1){
            break;
        }

        first=insert(data);
    }
    first=sort(first);
    printLinkedList(first);    
}