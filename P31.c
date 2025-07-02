//. Read two 2x2 matrices and perform addition of matrices into third matrix and 
//print it 
#include<stdio.h>
void main(){
    int m=2,n=2;
    int a[m][n],b[m][n];
   //First matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter elements of first matrix:");
            scanf("%d",&a[i][j]);
        }
    }
   //second matrix
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter elements of second matrix:");
            scanf("%d",&b[i][j]);
        }
    }

    //Sum of array
    int c[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
    }
   }

   printf("Addition of two array:");
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d\n",c[i][j]);
    }
   }
}