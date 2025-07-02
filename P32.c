// Read two matrices, first 3x2 and second 2x3, perform multiplication operation 
//and store result in third matrix and print it.
#include<stdio.h>
void main(){
    int m1=3,n1=2,m2=2,n2=3;
    int sum=0;
    int a[m1][n1],b[m2][n2];
    //First matrix
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("Enter elements of first matrix:");
            scanf("%d",&a[i][j]);
        }
    }
    //second matrix
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            printf("Enter elements of second matrix:");
            scanf("%d",&b[i][j]);
        }
    }
       
    int product[3][3];
    //Multiplication
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=0;
            for(int k=0;k<2;k++){
                sum+=a[i][k] * b[k][j];
            }
            product[i][j] = sum;
        }
    }

    //Resultant
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}