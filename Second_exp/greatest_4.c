#include<stdio.h>

int main(){
int a,b,c,d;
printf("\nEnter four Numbers: ");
printf("\n\nGreatest of Four: ");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("Greatest of four= %d", (a>b)? (a>c)? (a>d)? a : d  : (c>d)? c : d  : (b>c)? (b>d)? b : d  : (c>d)? c : d  );
printf("\n");
return 0;
}

