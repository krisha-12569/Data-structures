// Write a program to delete a number from an array that is already sorted in an 
//ascending order. 
#include<stdio.h>
void main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter elements in ascending order:");
        scanf("%d",&arr[i]);
    }
    int element,index;
    printf("Enter element to delete :");
    scanf("%d",&element);
    //find index
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            index=i;
            break;
        }
    }   
    //shift
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    printf("Final array:");
    for(int i=0;i<size-1;i++){
        printf("%d\n",arr[i]);
    }
}