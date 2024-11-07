#include<stdio.h>

int main(){
  int num;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  int i = 1;
  while(i<11) {
    printf("\n%d x %d = %d",num,i,num*i);
    i++;
  }
  return 0;
}