#include<stdio.h>
int main()
{
    float basic,da,ta;
    float gross_salary;
    printf("enter basic");
    scanf("%f",&basic);
    da = (0.1)*basic;
    ta = (0.12)*basic;
    gross_salary = basic+da+ta;
    printf("the gross salary is : %f",gross_salary);
    return 0;
}