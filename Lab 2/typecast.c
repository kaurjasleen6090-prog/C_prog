#include<stdio.h>
int main()
{
    int sum,n;
    double mean;
    printf(" enter sum and n : ");
    scanf(" %d %d", &sum , &n);
    mean = (double)sum /n;
    printf(" the mean is : %lf", mean);
    return 0;
}