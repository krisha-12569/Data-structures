#include<stdio.h>
#include<stdlib.h>

void main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);

    int *ptr=(int *)malloc(sizeof(int));

    for(int i=0;i<size;i++){
        scanf("%d",ptr+i);
     }

    for(int i=0;i<size;i++){
        printf("%d",*ptr+i);
     }
}