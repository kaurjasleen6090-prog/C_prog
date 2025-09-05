#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,n;
    double CI;
    printf("enter the value of p");
    scanf("%lf",&p);
    printf("enter the value of r");
    scanf("%lf",&r);
    printf("enetr the value of n");
    scanf("%lf",&n);
    CI = (p*(pow((1+(r/100)),n)))-p;
    printf("value of CI is : %lf",CI);
    return 0;
}
