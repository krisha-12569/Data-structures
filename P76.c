//Write a program to check whether the given two trees are same or not. 
#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *lptr;
    struct node *rptr;
};

struct node *root=NULL;

struct node *insert(struct node *root,int value){
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
            root->lptr = insert(root->lptr, value);
        }
        else
        {
            root->rptr = insert(root->rptr, value);
        }    
    }
    return root;
}

int aresame(struct node *tree1,struct node *tree2){
    if(tree1==NULL && tree2==NULL){
        return 1;
    }
    if(tree1==NULL || tree2==NULL){
        return 0;
    }
    return (tree1->info == tree2->info) &&
           aresame(tree1->lptr, tree2->lptr) &&
           aresame(tree1->rptr, tree2->rptr);
}
int main(){
    int data;
    struct node *tree1=NULL;
    struct node *tree2=NULL;

    while(1){
    printf("Enter data for tree 1 : ");
    scanf("%d",&data);

    if(data==-1){
        break;
    }
    tree1=insert(tree1,data);
   }
   while(1){
    printf("Enter data for tree 2 : ");
    scanf("%d",&data);

    if(data==-1){
        break;
     }

     tree2=insert(tree2,data);
    }

    if(aresame(tree1,tree2)){
        printf("Both trees are same.");
    }
    else{
        printf("Both are not same");
    }
    return 0;
}