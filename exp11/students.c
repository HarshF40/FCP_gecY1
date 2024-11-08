#include<stdio.h>

typedef struct{
    int roll_no;
    char* name;
    char* department;
    char* course;
    unsigned int yoj;
}student;

void list(student*,unsigned int);

int main(){
    student arr[5];
    unsigned int yoj;

    for(int i=0;i<5;i++){
        printf("\nEnter Name: ");
        scanf("%s",arr[i].name);
        printf("\nEnter Roll No. : ");
        scanf("%d",&arr[i].roll_no);
        printf("\nEnter department: ");
        scanf("%s",arr[i].department);
        printf("\nEnter course: ");
        scanf("%s",arr[i].course);
        printf("\nEnter year of joining: ");
        scanf("%u",&arr[i].yoj);
    }

    printf("\nEnter the a year: ");
    scanf("%u",&yoj);

    printf("\n");
    list(arr,yoj);
    printf("\n");

    return 0;
}

void list(student* ptr,unsigned int yoj){
    for(int i=0; i<5; i++){
        if(yoj == (*ptr).yoj){
            printf("%s\n",(*ptr).name);
        }
    }
}