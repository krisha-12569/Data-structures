// Write a program to insert a number in an array that is already sorted in an 
//ascending order. 
#include<stdio.h>
void main(){
    int size,a;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements in ascending order:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int element;
    printf("Enter element in an array:");
    scanf("%d",&element);
    int i;
    for (i =size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; 
    }
    arr[i + 1] = element;
    for(int i=0;i<size;i++){
        printf("%d",arr[i]); 
    }
}