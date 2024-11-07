#include<stdio.h>

int factorial(int n){
  if(n==1 || n==0)
    return 1;
  else
    return n*factorial(n-1);
}

int main(){

  int num;

  printf("\nEnter No. of Lines: ");
  scanf("%d",&num);

  for(int i=0;i<num;i++){
    int k=0;
    printf("\n");
    for(int j=0;j<num*2-1;j++){
      if(i+j>=num-1 && j-i<=num-1){
       if((num%2==0 && (i+j)%2!=0) || (num%2!=0 && (i+j)%2==0)){
         printf("%d ",factorial(i)/(factorial(k)*factorial(i-k)));
         k++;
       } else {
         printf(" ");
       }
      } else {
        printf(" ");
      }
    }
  }

  return 0;
}
