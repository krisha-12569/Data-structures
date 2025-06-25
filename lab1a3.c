#include<stdio.h>
void main(){
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    if( c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("Entered character is vowel");
    }
    else{
         printf("Entered character is consonent");
    }
}