#include<stdio.h>

int main(){

int x,y,z;

printf("\nEnter three integers: ");
scanf("%d%d%d",&x,&y,&z);

printf("\nResult:%d",x+y*++z/x&y-z);

return 0;
}

