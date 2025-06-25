// Write a program to calculate average of first n numbers.
#include<stdio.h>
void main(){
    int size=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    int a[size];
    int sum=0;
    printf("Enter elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        sum=sum+a[i];
    }
    float avg=0;
    avg=sum/size;
    printf("Average of array elements:%f",avg);
}