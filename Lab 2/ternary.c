#include<stdio.h>
int main()
{
    int a , b, result;
    printf("enter two numbers");
    scanf("%d %d", &a , &b);
    result = (a > b) ? a : b ;
    printf (" the greater number is : %d\n", result);
       return 0;
}