#include<stdio.h>
int main(){
double volume,radius,height;
printf("\nEnter Radius and height of the cynlider: ");
scanf("%lf%lf",&radius,&height);
volume = 3.14*radius*radius*height;
printf("\nThe volume of the cylinder is %lf",volume);
return 0;
}

