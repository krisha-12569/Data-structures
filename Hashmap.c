#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define m 10

struct pair{
    int value;
    char key[10];
};

struct pair hashmap[m];

int f(char key[]){
    int index=0;

    for(int i=0;i<strlen(key);i++){
        index=index+key[i];
    }
    return index%m;
}
void add(char k[],int V){
     int index=f(k);

     if(hashmap[index].key[0]=='\0'){
        strcpy(hashmap[index].key,k);
        hashmap[index].value=V;
        return;
     }
     else if(strcmp(hashmap[index].key,k)==0){
        hashmap[index].value=V;
        return;
     }
     else{
        for(int probe=1;probe<m;probe++){
            int i=(index+probe)%m;

            if(hashmap[i].key[0]=='\0'){
                strcpy(hashmap[i].key,k);
                hashmap[i].value=V;
                return;
            }
            if(strcmp(hashmap[i].key,k)==0){
                hashmap[i].value=V;
                return;
            }
        }
         printf("Hash Table is FULL");
     }
}
void display() {
    printf("\nHashmap contents:\n");
    for (int i = 0; i < m; i++) {
        if (hashmap[i].key[0] != '\0') {
            printf("[%d]--> %s -> %d\n", i,hashmap[i].key,hashmap[i].value);
        }
    }
}
void main(){
    add("darshan",4);
    add("Rajkot",7);   

    display();
}
