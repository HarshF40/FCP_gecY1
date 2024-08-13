#include<stdio.h>

int main(){
    int a,b;
    printf("\nEnter Two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping; a=%d and b=%d",a,b);
    a-=b;
    b+=a;
    a=b-a;
    printf("\nAfter swapping; a=%d and b=%d",a,b);
    return 0;
};

