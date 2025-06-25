//Write a program to calculate sum of numbers from m to n.
#include<stdio.h>
void main(){
    int m=0,n=0;
    int sum=0;
    printf("Enter two numbers(range):");
    scanf("%d %d",&m,&n);
    for(int i=m;i<n;i++){
        sum=sum+i;
    }
    printf("Sum of numbers:%d",sum);
}