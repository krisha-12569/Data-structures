// WAP to delete alternate nodes of a doubly linked list.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *lptr;
    struct node *rptr;
};


struct node *insert(struct node *first,int data){
    struct node * newNode=(struct node *)malloc(sizeof(struct node));
    newNode->info=data;
    newNode->rptr=NULL;

    if(first==NULL){
        newNode->lptr=NULL;
        return newNode;
    }
    else{
        struct node *save=first;

        while(save->rptr!=NULL){
            save=save->rptr;
        }

        save->rptr=newNode;
        newNode->lptr=save;
    }
    return first;
}
struct node *deleteAlternateNodes(struct node *first){
     if(first==NULL){
        return NULL;
     }

     struct node *current=first;
     int count=0;

     while(current!=NULL){
        if(count%2!=0){
            struct node *save=current;

            if(save->lptr!=NULL){
                 save->lptr->rptr = save->rptr;
            }

            if(save->rptr!=NULL){
                save->rptr->lptr=save->lptr;
            }

            current=save->rptr;
            free(save);

        }
        else{
            current=current->rptr;
        }
        count++;
     }
     return first;
}
void display(struct node *first){
    struct node *save=first;

    while(save!=NULL){
        printf("%d-->",save->info);
        save=save->rptr;
    }
  
}
int main(){
    struct node *first=NULL;
    int data;
    
    printf("enter -1 to stop: \n");
    while(1){

        printf("enter data: ");
        scanf("%d",&data);
        
        if(data==-1){
            break;
        }

        first=insert(first,data);
    }
    first=deleteAlternateNodes(first);
    display(first);

    return 0;
}