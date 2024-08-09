#include<stdio.h>
int main(){
float farn,celc;
printf("\nEnter temperature in fahrenheit: ");
scanf("%f",&farn);
celc = (farn-32)*5/9;
printf("Temperature in Fahrenheit = %f and Celcius = %f",farn,celc);
return 0;
}

