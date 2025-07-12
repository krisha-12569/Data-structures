//. Write a program to implement queue using singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *first = NULL;

void enqueue()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    int value;
    printf("Enter Value : ");
    scanf("%d", &value);

    newNode->info = value;
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

void dequeue()
{
    if (first == NULL)
    {
        printf("empty Queue\n");
        return;
    }
    struct node *temp = first;
    first = first->link;
    printf("Dequeued %d from queue\n",temp->info);
    free(temp);
}
void peek()
{
    if (first == NULL)
    {
        printf("Empty\n");
        return;
    }
    printf("Top Most Element : %d\n", first->info);
}

void display()
{
    struct node *save = first;
    if (save == NULL)
    {
        printf("Empty Stack\n");
        return;
    }
    printf("Queue elements:\n");
    while (save != NULL)
    {
        printf("%d\n", save->info);
        save = save->link;
    }
}
int main()
{
    int choice;

    while (1)
    {
        printf("Enter 1 to enqueue(Adds an element to the back of the queue)\n2 to dequeue(remove top element)\n3 to peek(Returns the element at the front of the queue without removing it)\n4 to display()\n5to exit");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting---");
            return 0;
        }
    }
}