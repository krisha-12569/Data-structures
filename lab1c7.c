#include<stdio.h>
void main(){
    int year,days,week,td;
    printf("Enter days:");
    scanf("%d",&td);
    year=td/365;
    td%=365;
    week=td/7;
    days=td%7;
    printf("%d:%d:%d",year,days,week);
}