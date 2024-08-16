#include<stdio.h>

int main(){
printf("\nGreatest of two numbers");
int a,b;
printf("\nEnter Two Numbers: ");
scanf("%d%d",&a,&b);
printf("Greatest of two= %d", a>b ? a : b );
////////////////////////////////////////////////////////////////////////
printf("\n\nGreatest of three");
int c,d,e;
printf("\nEnter Three Numbers: ");
scanf("%d%d%d",&c,&d,&e);
printf("Greatest of three= %d", c>d ? ( c>e ? c : e ) : (d>e) ? d : e );
printf("\n");
return 0;
}

