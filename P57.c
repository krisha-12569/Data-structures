#include<stdio.h>
#include<stdlib.h>
void InsertAtfirst(int x);
void Display();
void DeleteFirst();
void InsertAtEnd(int x);
void DeleteLast();
void DeleteAtLocation(int loc);
void  Countnodes();

struct node{
    int info;
    struct node *link;
};

// Insert a node at the front of the linked list.
struct node *first=NULL;
void InsertAtfirst(int x){
      struct node *newNode=(struct node *)malloc(sizeof(struct node));

      newNode->info=x;
      newNode->link=first;
      first=newNode;

      //printf("data of first node: %d",first->info);
}

//Display all nodes. 
void Display(){
    struct node *save=first;
    
    if(save==NULL){
      printf("Empty list");
      return;
    }
    else{
    while(save!=NULL){
         printf("|%d| -->",save->info);
         save=save->link;
    }
  }
}

//Delete a first node of the linked list.
void DeleteFirst(){
      struct node *save=first;

      if(first==NULL){
        printf("List is empty");
      }
      first=first->link;
}

//Insert a node at the end of the linked list.

void InsertAtEnd(int x){
      struct node *save;

      struct node *newNode=(struct node *)malloc(sizeof(struct node));
      newNode->info=x;
      newNode->link=NULL;

      if(first==NULL)
      {
        first=newNode;
        return;
      }
      else{
        save=first;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=newNode;
      }
 }

// Delete a last node of the linked list. 

void DeleteLast(){
     if(first==NULL){
      printf("List is empty");
      return;
     }
     struct node *save=first;
     struct node *pred=save;

        while(save->link!=NULL){
            pred=save;
            save=save->link;
        }

        pred->link=NULL; 
}

void DeleteAtLocation(int loc){
       struct node *pred=first;
       struct node *save=pred->link;
   
       int i=0;
       while(i!=loc-1){
        save=save->link;
        pred=pred->link;
        i++;
       }
        pred->link=save->link;
        free(save);

}

void  Countnodes(){
     int count=0;
     struct node *save=first;

     while(save!=NULL){
      count++;
      save=save->link;
     }

     printf("No. of nodes: %d",count);
}


int main(){
     int data,loc;
     while(1){
     printf("Enter data:");
     scanf("%d",&data);
     int choice;
     printf("Enter 1 for Insert a node at the front of the linked list:\n");
     printf("Enter 2 for Display all nodes:\n");
     printf("Enter 3 for Delete a first node of the linked list:\n");
     printf("Enter 4 for Insert a node at the end of the linked list:\n");
     printf("Enter 5 for Delete a last node of the linked list:\n");
     printf("Enter 6 for Delete a node from specified position:\n");
     printf("Enter 7 for count the number of nodes:\n");
     printf("Enter 8 to exit:");
     
     printf("Enter choice:");
     scanf("%d",&choice);

     switch(choice){
        case 1:{
          InsertAtfirst(data);
          break;
        }
        case 2:{
            Display();
            break;
        }
        case 3:{
            DeleteFirst();
            break;
        }
        case 4:{
          InsertAtEnd(data);
         
          break;
        }    
        case 5:{
          DeleteLast();
          Display();
          break;
        }
        case 6:{
           printf("enter location: ");
          scanf("%d",&loc);

          DeleteAtLocation(loc);
          Display();
          break;
        }
        case 7:{
          Countnodes();
          Display();
          break;
        }
       case 8:
            printf("Exiting ..");
            return 0;
        }
 }
}
