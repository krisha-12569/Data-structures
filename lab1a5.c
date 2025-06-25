#include<stdio.h>
void main(){
    int n;
    printf("Enter year:");
    scanf("%d",&n);
    if(n%100!=0 && n%4==0 || n%400==0){
        printf("Leap year");
    }
    else{
         printf("not a Leap year");
    }
}