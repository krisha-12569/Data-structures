// Read n numbers in an array then read two different numbers, replace 1st 
//number with 2nd number in an array and print its index and final array. 
#include<stdio.h>
void main(){
    int size=0;
    printf("Enter size:");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int a,b,temp=0,temp2=0;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
     for(int i=0;i,size;i++){
        if(a[i]==a){
           temp=a[i];
     }
     if(a[i]==b){
        temp2=a[i];
     }
}

int rep=0;
  rep=temp;
  temp=temp2;
  temp2=rep;
  printf("%d %d",temp,temp2);
}
