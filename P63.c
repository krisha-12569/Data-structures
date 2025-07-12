//Write a program to copy a linked list. 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first=NULL;
struct node * insertElement(struct node *first){
    int data;
    printf("Enter data:");
    scanf("%d",&data);

    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    struct node *save;
    newNode->info=data;
    newNode->link=NULL;

    if(first==NULL){
        first= newNode;
    }
    else{
        save=first;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=newNode;
    }
    return first;
}

struct node *copy(struct node *first){
    struct node *newfirst=(struct node *)malloc(sizeof(struct node));
    newfirst->info=first->info;    //Copy first node
    newfirst->link=NULL;
    
    struct node *save=first->link;
    struct node *temp=newfirst;
    while(save!=NULL){
        struct node *newNode=(struct node *)malloc(sizeof(struct node));
        newNode->info=save->info;
        newNode->link=NULL;

        temp->link=newNode;
        temp=newNode;
        save=save->link;
    }
    return newfirst;
}
void display(struct node *first){
    struct node *save=first;
    if(first==NULL){
        printf("Empty list");
        return;
    }
    while(save!=NULL){
        printf("%d-->",save->info);
        save=save->link;
    }
}

int main(){
    int choice;
    while(1){
    printf("Enter choice:");
    printf("Enter 1 for insertion\n");
    printf("Enter 2 to copy\n");
    printf("Enter 3 to display\n");
    printf("Enter 4 to exit\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        first=insertElement(first);
        break;

        case 2:{
         struct node *copied=copy(first);
         printf("Copied List:");
         display(copied);
         break;
        }
        case 3:
        printf("Original List:");
        display(first);
        break;

        case 4:
        exit(0);
     }
    }
}