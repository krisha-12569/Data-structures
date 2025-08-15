#include<stdio.h>

void main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int a[size];

    for(int i=0;i<size;i++){
        printf("Enter elements :");
        scanf("%d",&a[i]);
    }
    int n;
    printf("Enter value : ");
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<size;i++){
        if(a[i]==n){
            printf("%d found at %d",n,i);
          count++;
        }
    }
    if(count==0){
      printf("Not found");
    }
}