#include<stdio.h>
#include<stdlib.h>

int main(){
    int *iptr=(int *)malloc(sizeof(int));
    char *cptr=(char *)malloc(sizeof(char));
    float *fptr=(float *)malloc(sizeof(float));

    if(iptr && cptr && fptr){

    *iptr=4;
    *cptr='a';
    *fptr=5.65;

    printf("Integer pointer: %d",iptr);
    printf("Character pointer: %c",cptr);
    printf("float pointer: %f",fptr);
     
    return 0;

    }
    else
    {
         printf("Memory allocation failed");
    }
}