#include<stdio.h>
int main()
{
    float p;
    float r;
    float t;
    float SI;
    printf("enter the value of p");
    scanf("%f",&p);
    printf("enter the value of r");
    scanf("%f",&r);
    printf("enter the value of t");
    scanf("%f",&t);
    SI = (p*r*t)/100;
    printf("value of SI is : %f",SI);
    return 0;
}