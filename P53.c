//53. WAP to sort the array elements using Pointer.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);

    int *ptr=(int *)malloc(sizeof(int));

    for(int i=0;i<size;i++){
        printf("Enter elements:");
        scanf("%d",ptr+i);
    }
    
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
           if(*(ptr+j)>*(ptr+i)){
               temp=*(ptr+i);
               *(ptr+i)=*(ptr+j);
               *(ptr+j)=temp;
           } 
        }
    }
    //print
    for(int i=0;i<size;i++){
        printf("%d",*(ptr+i));
     }
}