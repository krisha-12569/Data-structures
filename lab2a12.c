#include<stdio.h>
void main(){
    int num,count=0;
    printf("enter number");
    scanf("%d",&num);
    int i;
    while(i<=num){
      if(num%i==1){
        count++;
      }
      i++;
    }
    if(count==2){
        printf("Number is prime");
    }
    else{
          printf("Number is not prime");
    }
}