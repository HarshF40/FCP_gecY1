#include<stdio.h>
#include<math.h>

int main(){

    int terms;
    int sum=1;

    printf("\nEnter Number of Terms: ");
    scanf("%d",&terms);


    int i=2;

    while(i<=terms){
        sum+=pow(-1,i)*pow(i,i);
        i++;
    }

    printf("\nSum of The series: %d",sum);

    return 0;
}

