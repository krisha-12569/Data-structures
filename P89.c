// Write a program to implement Bubble using Array. 

#include<stdio.h>
void main(){
     int n;
     printf("Enter size of array : ");
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++){
        printf("Enter elements of an array : ");
        scanf("%d",&a[i]);
     }

     int LAST=n-1;

     for(int i=0;i<n-1;i++){
        int EXCHS=0;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
             EXCHS++;

            if(EXCHS==0){
                printf("array is sorted,early return");
            }
            else{
                LAST--;
            }
        }
     }

     printf("Sorted array using Bubble sort....\n");
     for(int i=0;i<n;i++){
         printf("%d , ",a[i]);
    }
}