#include<stdio.h>
int main(){

    int first_term, cmn_diff, terms;

    printf("\nEnter the Number of Terms: ");
    scanf("%d",&terms);

    printf("\nEnter the Common difference: ");
    scanf("%d",&cmn_diff);

    printf("\nEnter the First Term: ");
    scanf("%d",&first_term);

    int i=1;
    while(i<=terms){
        printf("%d ",first_term+(i-1)*cmn_diff);
        i++;
    }

    return 0;
}

