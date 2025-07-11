//. WAP to check whether 2 singly linked lists are same or not.

#include<stdio.h>
#include<stdlib.h>
struct node *insertElement(struct node *list);
void display(void *list,void *list2);

struct node{
    int info;
    struct node *link;
};
struct node *first=NULL;
struct node *insertElement(struct node *list){
    int x;
    printf("Enter value: ");
    scanf("%d", &x);


    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->info=x;
    newNode->link=NULL;

    if(list==NULL){
         return newNode;
    }
    else{
        struct node *save=list;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=newNode;
    }
    return list;
}

void compare(struct node *list,struct node  *list2){
    int flag = 1;

    struct node *temp = list;
    struct node *temp2 = list2;

      while (temp != NULL && temp2 !=NULL)
    {
        if (temp->info != temp2->info)
        {
            flag = 0;
            break;
        }
        temp = temp->link;
        temp2 = temp2->link;
    } 

    if(temp2 == NULL && temp == NULL) {
        flag = 1;
    }
    else{
        flag = 0;
    }
    if (flag == 0){
        printf("Lists Are Not Same\n");
    }
    else
    {
        printf("Both Lists Are Same\n");
    }
}

int main(){
    struct node *first = NULL;
    struct node *begin = NULL;
    int choice;
    while(1){


        printf("Enter Choice\n1 For 1st List\n2 for 2nd List\n3 For Exit\n4 For Comparing\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            first =  insertElement(first);
            break;
        case 2:
            begin = insertElement(begin);
            break;
        case 3:
            printf("Exit");
            return 0;
        case 4:
            compare(first, begin);
            break;
        }
    }
}
