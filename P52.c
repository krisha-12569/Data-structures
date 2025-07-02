// WAP to find the largest element in the array using Pointer.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);

    int *ptr=(int *)malloc(sizeof(int));
    int max=0;
    for(int i=0;i<size;i++){
        printf("Enter elements:");
        scanf("%d",ptr+i);
    }

    max=*ptr+0;

    for(int i=0;i<size;i++){
        if(max<(*ptr+i)){
            max=(*ptr+i);
        }
    }

     printf("Maximum:%d",max);
}