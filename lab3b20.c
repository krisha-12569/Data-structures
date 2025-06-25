// Write a program to find whether the array contains a duplicate number or not.
#include<stdio.h>
void main(){
    int size=0, flag=0;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
  
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
               flag=1;
               break;
            }
        }
    }
    if(flag==1){
        printf("Duplicate no exists");
    }
    else{
        printf("Duplicate no does not exists");
    }

}