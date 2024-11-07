#include<stdio.h>

int main() {
  int num;
  printf("\nEnter a Number: ");
  scanf("%d",&num);
  int rev = 0;
  int d;
  int val = num;
  while(num>0){
    d = num%10;
    rev = d + rev*10;
    num/=10;
  }
  if(val == rev)
    printf("Palindrome");
  else
    printf("Not a palindrome");
  return 0;
}