// Write a program to construct a binary tree from given Postorder and Preorder
// traversal sequence.

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *lptr;
    struct node *rptr;
};
int pre_index = 0;
int SIZE;
struct node *root=NULL;

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->lptr = NULL;
    newNode->rptr = NULL;

    return newNode;
}
int find(int post[], int value, int l, int h)
{
    for (int i = l;i<h;i++){
          if(post[i]==value){
            return i;
          }
    }
    return -1;
}
struct node *createBST(int pre[], int post[], int l, int h, int SIZE)
{
    if (pre_index >= SIZE || l > h)
    {
        return NULL;
    }

    struct node *root = createNode(pre[pre_index]);
    pre_index++;

    if (l == h || pre_index >= SIZE) {
        return root;
    }
    int i = find(post, pre[pre_index], l, h);
    if(i!=-1 && i<h){
        root->lptr=createBST(pre,post,l,i,SIZE);
        root->rptr=createBST(pre,post,i+1,h-1,SIZE);
    }
    return root;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->lptr);
        printf("%d--> ", root->info);
        inorder(root->rptr);
    }
}

void main()
{
    printf("Enter size : ");
    scanf("%d", &SIZE);
    int l = 0, h = SIZE - 1;
    int pre[SIZE], post[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter preorder traversal : ");
        scanf("%d", &pre[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter postorder traversal : ");
        scanf("%d", &post[i]);
    }
    root=createBST(pre, post, l, h, SIZE);

    inorder(root);
}