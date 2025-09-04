// SELECTION SORT


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
    for(int i=0;i<n-1;i++){
        int MIN_INDEX=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[MIN_INDEX]){
                MIN_INDEX=j;
            }

            if(MIN_INDEX!=i){
                int temp=a[i];
                a[i]=a[MIN_INDEX];
                a[MIN_INDEX]=temp;
                
            }
        }
    }
     printf("Sorted array using selection sort...\n");
     for(int i=0;i<n;i++){
        printf("%d , ",a[i]);
    }
}

