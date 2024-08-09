#include<stdio.h>

int main(){
    int principle,time;
    double rate,simple_interest;
    printf("\nEnter Principle,time(year) & rate respectively: ");
    scanf("%d%d%lf",&principle,&time,&rate);
    simple_interest = principle*time*rate/100;
    printf("Simple Interest=%lf",simple_interest);
    return 0;
}

