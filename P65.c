// WAP to swap Kth node from beginning with Kth node from end in a singly linked 
//list. 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first=NULL;

struct node *insertelements(struct node *first){
    int data;
    printf("Enter data:");
    scanf("%d",&data);

    struct node *newNode=(struct node *)malloc(sizeof(struct node));
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

struct node *swapp(struct node *first,int k){
     struct node *kfrombeginning=first;
     struct node *kfromend= first;
     struct node *temp=first;


     int length=0;
     while(temp!=NULL){
        length++;
        temp=temp->link;
     }

     for(int i=1;i<k;i++){
        kfrombeginning=kfrombeginning->link;
     }

     for(int i=1;i<length- k+1;i++){
        kfromend=kfromend->link;
     }


     int tempinf=kfrombeginning->info;
     kfrombeginning->info=kfromend->info;
     kfromend->info=tempinf;


     return first;
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
    int choice,k;

    while(1){
        printf("Enter 1 to insert\n2 to swap Kth node from beginning with Kth node from end\n3 to display\n4 to exit:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            first=insertelements(first);
            break;

            case 2:
            printf("Enter k:");
            scanf("%d",&k);
            first=swapp(first,k);
            break;
            case 3:
            display(first);
            break;

            case 4:
            exit(0);
        }
    }
}