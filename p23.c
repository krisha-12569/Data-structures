// WAP to sort the N names in an alphabetical order.
#include<stdio.h>
#include<string.h>

void main(){
    int size;
    printf("Enter no. of names to store: ");
    scanf("%d",&size);

    char stringname[size];
    for(int i=0;i<size;i++){
        printf("Enter names:");
        scanf("%s",stringname[i]);
    }

   
}
