
#include<stdio.h>

int main(){

int marks;

printf("\nEnter marks obtained by the student: ");
scanf("%d",&marks);

printf("\nGrade: ");

if(marks>100 || marks <0){
    printf("---");
    return 0;
}

if(marks>=90)
    printf("A+");
else if(marks>=80)
    printf("A");
else if(marks>=70)
    printf("B");
else if(marks>=60)
    printf("C");
else if(marks>=50)
    printf("D");
else
    printf("F");

return 0;
}

