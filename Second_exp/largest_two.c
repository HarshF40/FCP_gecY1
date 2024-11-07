#include<stdio.h>

int main(){

int a,b;

printf("\nEnter two numbers: ");
scanf("%d%d",&a,&b);

if(a==b){
 printf("\nBoth are equal!");
} else {
if(a>b)
    printf("\n%d is greater!",a);
else
    printf("\n%d is greater!",b);
}
return 0;
}

