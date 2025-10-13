//WAP to calculate gross salary of a person, where gross_salary=basic+da+ta and da is 10% of basic and ta  is 12% of basic.

#include<stdio.h>

int main() {
    float basic;
    printf("Enter the value of basic: ");
    scanf("%f", &basic);

    printf("Gross_Salary is %f", basic + (basic * 0.10) + (basic * 0.12));

    return 0;

}
