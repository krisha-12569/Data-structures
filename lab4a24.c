//Write a program to insert a number at a given location in an array.
#include<stdio.h>
void main(){
    int index,n;
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index no to insert element:");
    scanf("%d",&index);
    printf("Enter an element to insert:");
    scanf("%d",&n);
    for(int i=size;i>index;i--){
         arr[i]=arr[i-1];
       }
     arr[index]=n; 
    
    printf("Final array:");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}