#include<stdio.h>
int main()
{
    int r;
    float pi = 3.14,area;
    printf("enter the value of radius : ");
    scanf("%d",&r);
    area = pi*r*r;
    printf("arear of circle = %f",area);
    return 0;
}