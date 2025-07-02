#include<stdio.h>
#include<stdlib.h>
void insertElement(int x);
void compare();
void display();

struct node{
    int info;
    struct node *link;
};
struct node *first=NULL;

void insertElement(int x){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    struct node *save;
    newNode->info=x;
    newNode->link=NULL;

    if(first=NULL){
        first= newNode;
    }
    else{
        save=first;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=newNode;
    }

}


void compare(){
    struct node *temp=first;

    if(first=NULL){
        printf("Empty\n");
        return;
    }
    else{
        while(temp->link!=NULL && temp!=NULL){
            if(temp->info==temp->link->info){
                temp->link=temp->link->link;
            }
            else{
                temp=temp->link;
            }
        }
    }
}


void display(){
    struct node *current=first;

    if(first==NULL){
        printf("Empty");
        return;
    }
    while(current!=NULL){
        printf("|%d|-->",current->info);
        current=current->link;
    }
}

int main(){
    int a,choice;
    while(1){
    printf("Enter 1 for Insertion\n Enter 2 to compare\nEnter 3 to display list\nEnter 4 to exit:");
    printf("Enter choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
          printf("Enter Element:");
          scanf("%d",&a);

          insertElement(a);
          break;
    
      case 2:
        compare();
        break;
    
      case 3:
      display();
      break;
      case 4:
            printf("---Exiting---");
            return 0;
        }
    }
     return 0;
}

