//Write a program to read and display n numbers using an array. 
#include<stdio.h>
void main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}