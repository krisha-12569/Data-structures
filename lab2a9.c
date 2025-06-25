#include<stdio.h>
void main(){
    int num,power,res;
    printf("Enter number:");
    scanf("%d",&num);
    res=num;
     printf("Enter power:");
    scanf("%d",&power);

    for (int i = 0; i <power-1; i++)
    {
       res=num*res;
    }

    printf("The result of expression is: %d",res);
    
}