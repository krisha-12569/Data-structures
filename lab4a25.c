// Write a program to delete a number from a given location in an array. 
#include<stdio.h>
void main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int index,n;
    printf("Enter index no to delete element:");
    scanf("%d",&index);
    for(int i=index;i<size;i++){
        a[i]=a[i+1];
    }
    printf("Final array");
    for(int i=0;i<size-1;i++){
        printf("%d\n",a[i]);
    }
}