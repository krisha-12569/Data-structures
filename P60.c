//. Write a program to implement stack using singly linked list.

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

void push(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Memory allocation failed\n");
        return;
    }

    newNode->info = data;
    newNode->link = first;
    first = newNode;
    printf("Pushed %d onto the stack.\n", data);
}

void pop()
{
    if (first == NULL)
    {
        printf("Empty Stack");
        return;
    }
    struct node *temp = first;
    first = first->link;
    printf("Popped %d from the stack.\n", temp->info);
    free(temp);
}

int peek()
{
    if (first == NULL)
    {
        printf("Empty Stack\n");
        return -1;
    }
    return first->info;
}

void display()
{
    struct node *save = first;
    if (save == NULL)
    {
        printf("Empty Stack\n");
        return;
    }
    printf("Stack elements:\n");
    while (save != NULL)
    {
        printf("%d\n", save->info);
        save = save->link;
    }
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("Enter 1 for push(Adds an element to the top of the stack)\n2 for pop(Removes the top element from the stack)\n3 for peek(Returns the top element without removing it)\n4 to display\n5 to exit");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number:");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
        {
            int top = peek();
            if (top != -1)
            {
                printf("Top element is: %d\n", top);
            }
        }
        break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting..");
            return 0;
        default:
            break;
        }
    }
}