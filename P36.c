//Write a program to determine if an input character string is of the form aibi 
//where i >= 1 i.e., Number of ‘a’ should be equal to number of ‘b’.


#include<stdio.h>
#include<string.h>

void aibi_check(char string[]){
    int len=strlen(string);

    int ac=0,bc=0;
    int i=0;
    while(string[i]!='\0'){
    if(i<len && string[i] == 'a'){
      ac++;
    }
    else if(i<len && string[i] == 'b'){
      bc++;
      
    }
    else{
     break;
    }
    i++;
  }
    if(bc==ac && (ac+bc)==len){
        printf("Valid string");
    }
    else{
         printf("InValid string");
    }
}


void main(){
    char string[100];

    printf("Enter a string:");
    scanf("%s",string);

    aibi_check(string);
}