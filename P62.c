// WAP to remove duplicate elements from a singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *first = NULL;
void insertelement(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->link = NULL;

    if (first == NULL)
    {
        first = newNode;
        return;
    }
    struct node *save = first;
    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = newNode;
}
void removeduplicate()
{
   struct node *current=first;

   while(current!=NULL){
    struct node *save=current;

      while(save->link!=NULL){
        if(save->link->info == current->info){
           struct node *dup=save->link;
           save->link=save->link->link;
           free(dup);
        }
        else{
            save=save->link;
        }
      }

      current=current->link;
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

int main()
{
    int choice,data;
    while (1)
    {
        printf("1 To Insert elements\n2 remove duplicate\n3 To Display Elements\n4 To Exit\n ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data:");
            scanf("%d", &data);
            insertelement(data);
            break;
        case 2:
            removeduplicate();
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
