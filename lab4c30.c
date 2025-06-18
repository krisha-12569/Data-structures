// WAP to replace lowercase characters by uppercase & vice-versa in a user 
//specified string. 
#include<stdio.h>
#include<string.h>
void main(){
    char ch[20];
    printf("Enter a string:");
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++){
     //lower case
        if(ch[i]>='A' && ch[i]<='Z') {
         ch[i] = ch[i] + 32;
      }
      //upper case
      else if(ch[i]>='a' && ch[i]<='z') {
         ch[i] = ch[i] - 32;
      }
    }
    printf("String:%s",ch);
}