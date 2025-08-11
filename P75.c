// Write a menu driven program to implement Binary Search Tree (BST) & perform
// following operations:
// • Insert a node
// • Delete a node
// • Search a node
// • Preorder Traversal
// • Postorder Traversal
// • Inorder Traversal

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *lptr;
    struct node *rptr;
};
struct node *root = NULL;
struct node *insertnode(struct node *root, int value)
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
struct node *min(struct node *root){
      while(root!=NULL && root->lptr!=NULL){
        root=root->lptr;
      }
      return root;
}
struct node *deletenode(struct node *root, int value)
{
   if(root==NULL){
    return root;
   }
   else if(value < root->info){
    root->lptr=deletenode(root->lptr,value);
   }
   else if(value > root->info){
    root->rptr=deletenode(root->rptr,value);
   }
   else{
     if(root->rptr==NULL){
        struct node *temp=root->lptr;
        free(root);
        return temp;
     }
     else if(root->lptr==NULL){
        struct node *temp=root->rptr;
        free(root);
        return temp;
     }
     else{
        struct node *temp=min(root->rptr);
        root->info=temp->info;
        root->rptr=deletenode(root->rptr,temp->info);
     }
   }
   return root;
}


struct node *preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d, ", root->info);
        preorder(root->lptr);
        preorder(root->rptr);
    }
}
struct node *inorder(struct node *root)
{
    if (root != NULL)
    {
        preorder(root->lptr);
        printf("%d, ", root->info);
        preorder(root->rptr);
    }
}
struct node *postorder(struct node *root)
{
    if (root != NULL)
    {
        preorder(root->lptr);
        preorder(root->rptr);
        printf("%d, ", root->info);
    }
}

struct node *search(struct node *root, int value)
{
    if (root == NULL)
    {
        printf("node not found");
        return root;
    }
    else if (value == root->info)
    {
        printf("%d", root->info);
    }
    else if (value < root->info)
    {
       return  search(root->lptr,value);
    }
    else if (value > root->info)
    {
        return search(root->rptr,value);
    }
}

void  main()
{
    int choice, value;
    while (1)
    {
        printf("Enter 1 to insert \n 2 to delete a node \n 3 for preorder traversal \n 4 for postorder traversal\n 5 for inorder traversal \n 6 to search\n 7 to exit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0: 
        exit(0);

        case 1:
        while(1){
            printf("Enter a value :");
            scanf("%d", &value);
            if(value ==-1){
                break;
            }
            root=insertnode(root, value);
        }
        break;
        case 2:
            printf("Enter value to be deleted : ");
            scanf("%d", &value);
            root=deletenode(root, value);
            break;

        case 3:
            printf("Preorder Traversal: ");
            preorder(root);
            break;

        case 4:
            printf("Postorder Traversal: ");
            postorder(root);
            break;

        case 5:
            printf("Inorder Traversal: ");
            inorder(root);
            break;

        case 6:
            printf("Enter value to search : ");
            scanf("%d", &value);
            struct node *result=search(root, value);
            if(result!=NULL){
                printf("Node found : %d\n",result->info);
            }
            else{
                printf("Node not found\n");
            }
            break;
          
        }
    }
  
}