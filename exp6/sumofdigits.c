#include<stdio.h>

int non_rec(int num);
int rec(int num);

int main(){
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    printf("\nNon Recursive Sum : %d",non_rec(num));
    printf("\nRecursive Sum : %d\n",rec(num));
    return 0;
}

int non_rec(int num){
    int sum = 0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int rec(int num){
    if(num == 0)
        return 0;
    else 
        return num%10 + rec(num/10);
    
}