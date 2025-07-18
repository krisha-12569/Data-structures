// Write a menu driven program to implement following operations on the doubly
// linked list.
// • Insert a node at the front of the linked list.
// • Delete a node from specified position.
// • Insert a node at the end of the linked list. (Home Work)
// • Display all nodes. (Home Work)

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *lptr, *rptr;
};
struct node *first = NULL;

void Insertatfirst()
{
    int data;
    printf("Enter data:");
    scanf("%d", &data);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->lptr = NULL;
    newNode->rptr = first;

    if (first != NULL)
    {
        first->lptr = newNode;
    }
    first = newNode;
}
void InsertatEnd()
{
    int data;
    printf("Enter data:");
    scanf("%d", &data);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->rptr = NULL;

    if (first == NULL)
    {
        newNode->lptr = NULL;
        first = newNode;
    }

    else
    {
        struct node *save = first;

        while (save->rptr != NULL)
        {
            save = save->rptr;
        }
        save->rptr = newNode;
        newNode->lptr = save;
    }
}

void deleteatloc()
{

    if (first == NULL)
    {
        printf("List is Empty");
    }
    int position;
    printf("Enter position to be deleted: ");
    scanf("%d", &position);

    struct node *save = first;
    int i = 1;
    while (i < position && save != NULL)
    {
        save = save->rptr;
        i++;
    }
   
    // If deleting first node
    if (save == first)
    {
        first = first->rptr;
        if (first != NULL)
        {
            first->lptr = NULL;
        }
        free(save);
        printf("Deleted node at position %d\n", position);
        return;
    }
    // If deleting a node in the middle or end
    if (save->rptr != NULL)
    {
        save->rptr->lptr = save->lptr;
    }
    save->lptr->rptr = save->rptr;
    free(save);
    printf("Deleted node at position %d\n", position);
}

void display()
{
    struct node *save = first;

    if (save == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (save != NULL)
    {
        printf("%d-->", save->info);
        save = save->rptr;
    }
}
int main()
{
    int choice;

    while (1)
    {
        printf("Enter 1 for insert at first\n2 for insert at last\n3 for delete at position\n4 to display\n5 to exit:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Insertatfirst();
            display();
            break;
        case 2:
            InsertatEnd();
            display();
            break;
        case 3:
            deleteatloc();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}
