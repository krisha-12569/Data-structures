#include<stdio.h>
void main(){
    int temp,n,rem=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    int sum=0;
    while(n!=0){
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
   printf("Reversed number=%d",sum);
}