#include<stdio.h>

int main(){

    int terms;
    float sum=0;
    int fact=1;

    printf("\nEnter Number of terms: ");
    scanf("%d",&terms);

    for(int i=1;i<=terms;i++){
            fact*=i;
            sum+=(1.0/fact);
    }


    printf("\nSum of the Series is: %f",sum);

    return 0;
}

