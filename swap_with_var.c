#include<stdio.h>

int main(){
    int a,b,temp;
    printf("\nEnter Two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping; a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping; a=%d and b=%d",a,b);
    return 0;
};

