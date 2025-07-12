//Write a program to reverse a linked list. 

#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *first=NULL;

struct node  *insertelements(struct node *first){
    int data;
    printf("Enter data:");
    scanf("%d",&data);

    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->info=data;
    newNode->link=NULL;

    if(first==NULL){
        first= newNode;
    }
    else{
        struct node *save;
        save=first;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=newNode;
    }
     return first;
}

struct node  *reverse(struct node *first){
   struct node *pred=NULL;
   struct node *next=NULL;
   struct node *current=first;

   while(current!=NULL){
    next=current->link;
    current->link=pred;
    pred=current;
    current=next;
    }
    return pred; 
}
void display(struct node *first)
{
    struct node *save = first;
    if (save == NULL)
    {
        printf("Empty List");
        return;
    }
    while (save!= NULL)
    {
        printf("%d --> ",save->info);
        save = save->link;
    }
    printf("NULL\n");
}

int main(){
    int choice;
    while(1){
        printf("Enter 1 to insert elements\n2 to reverse\n3to display\n to exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            first=insertelements(first);
            break;

            case 2:
             first=reverse(first);
            break;

            case 3:
            display(first);
            break;
            case 4:
            printf("Exit");
            exit(0);
        }
    }
}
