#include<stdio.h>

void non_rec(int num);
int rec(int num);

int main(){
    int num;
    printf("\nEnter number of terms: ");
    scanf("%d",&num);
    printf("\nNon Recursive: ");
    non_rec(num);
    printf("\nRecursive: ");
    for(int i=0;i<num;i++)
        printf("%d ",rec(i));
    printf("\n");
    return 0;
}

void non_rec(int num){
    int pval = 0,prev,next=1;
    for(int i=0; i<num; i++){
        printf("%d ",pval);
        prev = pval;
        pval = next;
        next = pval + prev;
    }
}

int rec(int num){
    if(num == 0)
        return 0;
    else if(num == 1)
        return 1;
    else
        return (rec(num-1) + rec(num-2));
}