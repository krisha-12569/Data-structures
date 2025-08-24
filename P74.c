// Write a program to simulate music player application using suitable data 
// structure. There is no estimation about number of music files to be managed by 
// the music player. Your program should support all the basic music player 
// operations to play and manage the playlist. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char name[100];
    struct node *next;
    struct node *prev;
};

struct node *current=NULL;
struct node *first=NULL;
struct node *last=NULL;

struct node *createsong(char name[]){
     struct node *newSong=(struct node *)malloc(sizeof(struct node));
     strcpy(newSong->name,name);
     newSong->next=NULL;
     newSong->prev=NULL;

     return newSong;
}

struct node *addsong(char name[]){
    struct node *newSong=createsong(name);
    if(first==NULL){
        first=last=newSong;
        first->next=first;
        first->prev=first;
        current=first;
    }
    else{
       newSong->prev=last;
       newSong->next=first;
       last->next=newSong;
       first->prev=newSong;
       last=newSong;
    }
    printf("%s song is added to playlist\n",name);
}


void playnext(){
    if(current==NULL){
        printf("Empty Playlist...");
        return;
    }
    current=current->next;
    printf("Now Playing : %s\n",current->name);
}

void playprev(){
    if(current==NULL){
        printf("Empty Playlist...");
        return;
    }
    current=current->prev;
    printf("Now playing : %s\n",current->name);
}
void display(){
      if(first==NULL){
        printf("Playlist is empty!\n");
        return;
      }
      struct node *temp=first;
      do{
        printf("%s\n", temp->name);
        temp = temp->next;
      } while(temp!=first);
}
void main(){
    char name[100];
    int choice;
    while(1){
        printf("Enter 1 to add song : \n");
        printf("Enter 2 to play next song : \n");
        printf("Enter 3 to play previous song : \n");
        printf("Enter 4 to display : \n");
        printf("Enter 5 to exit : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter name of song to be added : ");
            scanf("%s",name);

            addsong(name);
            break;

            case 2:
            playnext();
            break;

            case 3:
            playprev();
            break;

            case 4:
            display();
            break;

            case 5:
            exit(0);
        }
    }
} 