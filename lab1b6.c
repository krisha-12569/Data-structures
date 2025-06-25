#include<stdio.h>
void main(){
    int seconds,hours,minutes,totalseconds;
    printf("enter seconds:"); 
    scanf("%d",&totalseconds);
     hours=totalseconds/3600;  
     totalseconds %= 3600;     
     minutes=totalseconds/60;   
     seconds=totalseconds%60;  
     printf("%d:%d:%d",hours,minutes,seconds);
}