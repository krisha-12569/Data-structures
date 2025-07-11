#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first=NULL;
void insertelement(struct node *first){
     struct node *newNode = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter Value : ");
    scanf("%d", &data);
    newNode->info = data;
    newNode->link = NULL;
    struct node *save = first;
    if (first == NULL)
    {
        first = newNode;
        return;
    }
    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = newNode;
    
}
void removeduplicate(struct node *first){
  struct node *current=first;

  while(current!=NULL && current->link!=NULL){
    if(current->info== current->link->info){
        struct node *dup=current->link;
        current->link=current->link->link;
        free(dup);
    }
    else{
        current=current->link;
    }
  }

}
void display()
{
    struct node *temp = first;
    if (first == NULL)
    {
        printf("Empty List");
        return;
    }
    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

int main(){
    int choice;
    while(1){
        printf("1 To Insert elements\n2 remove duplicate\n3 To Display Elements\n4 To Exit\n ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            insertelement(first);
            break;
            case 2:
            removeduplicate(first);
            break;
            case 3:
             display();
              break;
            case 4:
             printf("---Exiting---");
             return 0;
        }
     }
}

