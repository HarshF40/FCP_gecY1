#include<stdio.h>
#define TRUE 1 
#define FALSE 0 

int main(){
  int num;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  int i = 2;
  int flag = TRUE;
  while(i<num){
    if(num%i == 0) {
      flag = FALSE;
      break;
    }
    i++;
  }
  if(flag)
    printf("\nPrime Number");
  else 
    printf("\nComposite Number");
  return 0;
}