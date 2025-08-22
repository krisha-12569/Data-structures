// WAP to find the smallest and largest elements in the Binary Search Tree. 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *lptr;
    struct node *rptr;
};
struct node *root=NULL;
struct node *insertnode(struct node *root,int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = value;
    newNode->lptr = NULL;
    newNode->rptr = NULL;

    if (root == NULL)
    {
        root = newNode;
        
    }
    else
    {
        if (value < root->info)
        {
            root->lptr = insertnode(root->lptr, value);
        }
        else
        {
            root->rptr = insertnode(root->rptr, value);
        }
        
    }
    return root;
}

struct node *smallest(struct node *root){
    if(root==NULL){
        printf("Tree is empty ");
        return NULL;
    }
    struct node *temp=root;
     while(temp->lptr!=NULL){
        temp=temp->lptr;
     }
     printf("smallest data is : %d\n",temp->info);
     return temp;
}
struct node *largest(struct node *root){
    if(root==NULL){
        printf("Tree is empty ");
        return NULL;
    }
    struct node *temp=root;
     while(temp->rptr!=NULL){
        temp=temp->rptr;
     }
     printf("largest data is : %d\n",temp->info);
     return temp;
}
void main(){
    int choice,value;
    while(1){
        printf("Enter 1 to insert data : \n");
        printf("Enter 2 to find minimum data : \n");
        printf("Enter 3 to find maximam data : \n");
        printf("Enter 4 to exit : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter data : ");
            scanf("%d",&value);
            root=insertnode(root,value);
            break;

            case 2:
            smallest(root);
            break;

            case 3:
            largest(root);
            break;

            case 4:
            exit(0);
        }
    }
}