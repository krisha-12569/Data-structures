#include<stdio.h>
int fact(int n);
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int ans=fact(num);
    printf("Ans= %d",ans);
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}