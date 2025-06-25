// 1+ (1+2) + (1+2+3) +.......(1+2+...+n)

#include<stdio.h>
void main(){
    int sum=0,num;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            sum+=j;
        }
    }
    printf("Ans= %d",sum);
}