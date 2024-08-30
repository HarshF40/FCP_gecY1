#include<stdio.h>

int main(){

 char _operator;
 float num1,num2;

  printf("\n_____________CALCULATOR______________\n\n\n");

  printf("\nChoose an Operation: \n\n~ +\n~ -\n~ /\n~ *\n\nEnter Choice: ");
   scanf("%c",&_operator);

  printf("\n\nEnter Two Numbers: ");
   scanf("%f%f",&num1,&num2);

   printf("\nResult: ");

  switch(_operator){
    case '+' : printf("%f",num1+num2);
               break;
    case '-' : printf("%f",num1-num2);
               break;
    case '/' : printf("%f",num1/num2);
               break;
    case '*' : printf("%f",num1*num2);
               break;
    default  : printf("---");
  }

return 0;
}

