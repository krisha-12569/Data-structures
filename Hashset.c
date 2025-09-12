#include<stdio.h>
#include<stdlib.h>
#define m 10

int hashset[m];

void init(){
    for(int i=0;i<m;i++){
        hashset[i]=-1;
    }
}
int f(int key){
     return key%m;
}

void add(int key){
    int index=f(key);

    if(hashset[index]==-1){
        hashset[index]=key;
        return;
    }

    else if(hashset[index]==key){
        printf("Key already exist");
    }

    else{
        for(int probe=1;probe<m;probe++){
            int i=(index+probe)%m;

            if(hashset[i]==-1){
                hashset[i]=key;
                return;
            }

            if(hashset[i]==key){
                printf("Key already exist");
            }

            printf("Hashset is FULL");
        }
    }
}

void display(){
    for(int i=0;i<m;i++){
        printf("%d-->",hashset[i]);
    }
}

void main(){
    init();
    add(5);
    add(10);

    display();
}