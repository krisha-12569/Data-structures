// Write a program to implement Insertion Sort using Array.

#include<stdio.h>
void main(){
    int size;
    printf("Enter size of an array : ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter elements of an array : ");
        scanf("%d",&arr[i]);
    }

    int i=1;
    while(i<size){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        i++;
    }
     
    printf("Sorted array using insertion sort...\n");
    for(int i=0;i<size;i++){
        printf("%d , ",arr[i]);
    }
}