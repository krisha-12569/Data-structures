// Write a program to implement a node structure for singly linked list. Read the 
//data in a node, print the node.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

void main(){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));

    printf("Enter info:");
    scanf("%d",&newNode->info);
}