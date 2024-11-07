#include<stdio.h>

int main() {

    int pVal=0,prev=0,next=1,i=1,noOfTerms;

    printf("\nEnter no. of terms: ");
    scanf("%d",&noOfTerms);

loop:
    if(i<=noOfTerms) {
        printf("%d ",pVal);
        prev = pVal;
        pVal=next;
        next+=prev;
        i++;
        goto loop;
    }

    return 0;
}
