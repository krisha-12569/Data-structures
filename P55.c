#include<stdio.h>
#include<string.h>

struct Student{
    int roll_no;
    char name[25];
    char branch[25];
     int batch_No;
};

int main(){
    struct Student s1;

    struct Student *ptr;

    ptr=&s1;

    printf("Enter roll number:");
    scanf("%d",&ptr->roll_no);
    printf("Enter name:");
    scanf("%s",ptr->name);
    printf("Enter Branch:");
    scanf("%s",ptr->branch);
    printf("Enter batch no:");
    scanf("%d",&ptr->batch_No);


    printf("Roll number:%d\n",ptr->roll_no);
    printf("Name:%s\n",ptr->name);
    printf("Branch:%s\n",ptr->branch);
    printf("Batch NO:%d\n",ptr->batch_No);
}
