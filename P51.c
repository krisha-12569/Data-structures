#include<stdio.h>
#include<stdlib.h>

void main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);

    int *ptr=(int *)malloc(sizeof(int));

    int sum=0;

    for(int i=0;i<size;i++){
        printf("Enter elements:");
        scanf("%d",ptr+i);
    }

    //sum of elememts
    for(int i=0;i<size;i++){
        sum=sum+(*ptr+i);
    }
    
    printf("Sum of elements:%d",sum);
}