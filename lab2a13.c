#include<stdio.h>
void main(){
    int startindex=0,endindex=0;
    printf("Enter start number");
    scanf("%d",&startindex);
     printf("Enter end number");
    scanf("%d",&endindex);
   
    for(startindex;startindex<=endindex;startindex++){
      int flag=0;
      for(int i=2;i<startindex;i++){
         if(startindex%i==0){
            flag=1;
            break;
         }
      }

      if(flag==0){
         printf("%d",startindex);
      }
    }
}