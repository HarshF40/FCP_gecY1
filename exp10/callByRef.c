#include<stdio.h>

void _swap(int* val1,int* val2);

int main(){
  int num1,num2;
  printf("\nEnter Two Numbers: ");
  scanf("%d%d",&num1,&num2);
  printf("\nNumber Before Swapping:\nNum1: %d\nNum2: %d",num1,num2);
  _swap(&num1,&num2);
  printf("\nNumber after Swapping:\nNum1: %d\nNum2: %d\n",num1,num2);
  return 0;
} 

void _swap(int* val1,int* val2){
  int temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}