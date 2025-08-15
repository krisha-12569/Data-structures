//  Write a program to implement a Binary Search using Array. (Iterative & 
// recursive) 


//iterative
// #include<stdio.h>

// void main(){
//     int size;
//     printf("Enter size of array : ");
//     scanf("%d",&size);
//     int a[size];
//     for(int i=0;i<size;i++){
//         printf("Enter elements :");
//         scanf("%d",&a[i]);
//     }
//     int value;
//     printf("Enter value : ");
//     scanf("%d",&value);

//     int left=0,right=size-1;
//     int middle=0;
//     int count=0;
//     while(left<=right){
//       middle=(left+right)/2;

//       if(a[middle]==value){
//         printf("%d found at %d",value,middle);
//         count++;
//         break;
//       }
//       else if(value<a[middle]){
//         right=middle-1;
//       }
//       else{
//         left=middle+1;
//       }
//     }

//     if(count==0){
//         printf("Not found");
//     }
// }


//recursion


#include<stdio.h>

int Binary_search(int arr[],int left,int right,int value){
    if(left<=right){
        int middle=(left+right)/2;

        if(arr[middle]==value){
            return middle;
        }
        else if(value<arr[middle]){
            return Binary_search(arr,left,middle-1,value);
        }
        else{
            return Binary_search(arr,middle+1,right,value);
        }
    }
    return -1;

}
void main(){
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
     int arr[size];
     for(int i=0;i<size;i++){
         printf("Enter elements :");
         scanf("%d",&arr[i]);
    }
    int left=0,right=size-1;
    int value;
    printf("Enter value :");
    scanf("%d",&value);
    int a=Binary_search(arr,left,right,value);
     
    if(a==-1){
        printf("Not found");
    }
    else{
        printf("%d found at %d",value,a);
    }
} 