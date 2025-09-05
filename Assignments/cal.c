#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    float div;
    a = 5;
    b = 10;
    sum = (a+b);
    printf("sum : %d\n",sum);
    sub = (a-b);
    printf("sub : %d\n",sub);
    mul = (a*b);
    printf("mul : %d\n",mul);
    div = ((float)a/b);
    printf("div : %f\n ",div);
    return 0;
}