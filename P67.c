// WAP to perform given operation in the linked list. There exist a Linked List. Add 
// a node that contains the GCD of that two nodes between every pair adjacent 
// node of Linked List.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first=NULL;

struct node  *insertElements(int data){
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
int findGCD(struct node *first){
      struct node *pred=first;
      struct node *save=first->link;

      int temp=0;

      while(pred!=NULL && save!=NULL){
        if(pred->info > save->info){
            for(int i=1;i<=save->info;i++){
                if(pred->info%i==0 && save->info%i==0){
                    temp=i;
                }
            }
            return temp;
        }
        else{
            for(int i=1;i<=pred->info;i++){
                if(pred->info%i==0  && save->info==0){
                    temp=i;
                }
            }
            return temp;
        }
    }
}

struct node *insertMiddle(struct node *first){
    struct node * pred=first;
    struct node * save=pred->link;

    while(save!=NULL && pred!=NULL){
        int data=findGCD(pred);

        struct node *newNode=(struct node *)malloc(sizeof(struct node));
        newNode->info=data;
        newNode->link=save;
        pred->link=newNode;

        pred=newNode->link;
        save=save->link;
    }
    return first;

}

void printList(struct node *first){
    struct node * save=first;

    while(save!=NULL){
        printf("%d-->",save->info);
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

        first=insertElements(data);
    }
    first=insertMiddle(first);
    printList(first);

}