#include<stdio.h>

int main(){

double basicPay,grossSalary;

printf("\nEnter Basic Pay: ");
scanf("%lf",&basicPay);

if(basicPay<=25000)
    grossSalary=basicPay*(1+0.1+0.15);
else if(basicPay<=40000)
    grossSalary=basicPay*(1+0.12+0.18);
else
    grossSalary=basicPay*(1+0.15+0.2);

    printf("\nGross salary: %lf",grossSalary);

return 0;
}

