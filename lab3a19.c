// Write a program to find position of the smallest number & the largest number 
//from given n numbers.
#include<stdio.h>
void main(){
    int size=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    int smallno=0,largeno=0;
    printf("Enter elements of an array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    smallno=arr[0];
    largeno=arr[0];
    printf("%d\n",smallno);
    for(int i=0;i<size;i++){
       if(arr[i]<smallno){
       arr[i]=smallno;
       }
       if(arr[i]>largeno){
        arr[i]=largeno;
       }
    }
    printf("Smallest no=%d",smallno);
    printf("Largest number=%d",largeno);
}