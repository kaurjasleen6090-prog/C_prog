#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float a;
    double root;
    printf("enter the number");
    scanf("%f",&a);
    printf("enter the value of n");
    scanf("%d",&n);
    root = pow(a,1.0/n);
    printf("the nth root is : %lf",root);
    return 0;
}