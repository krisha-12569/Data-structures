// WAP to print Pascal triangle. 

#include<stdio.h>
void main(){
    int rows,space,value=1;

    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for(int i=0;i<rows;i++){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }

        for(int j=0;j<=i;j++){
            if(i==0 || j==0){
                value=1;
            }
            else{
                value=value*(i-j+1)/j;
            }
            printf("%4d",value);
        }
        printf("\n");
    }
}