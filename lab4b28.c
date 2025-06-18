//. Write a program to delete duplicate numbers from an array.
#include<stdio.h>
void main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter elements:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
       for(int j=0;j>=i;j++){
        if(arr[i]==arr[j]){
           arr[j]=arr[j+1];
        }
       }
    }
    printf("Final array:");
    for(int i=0;i<size-1;i++){
        printf("%d\n",arr[i]);
    }
}