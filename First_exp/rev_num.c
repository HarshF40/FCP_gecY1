#include<stdio.h>

int main(){

  int num,d,temp;
  int rev=0;

  printf("\nEnter a number to Reverse: ");
  scanf("%d",&num);

  temp=num;

  while(temp>0){
    d=temp%10;
    rev=rev*10+d;
    temp/=10;
  }

  printf("\nOriginal = %d\nReverse = %d",num,rev);

  return 0;
}
