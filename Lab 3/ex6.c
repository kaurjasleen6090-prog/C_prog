#include<stdio.h>
int main()
{
    int n;
    printf(" enter the number : ", n);
    scanf(" %d", &n);
    if ( n % 5 == 0  && n % 8 == 0)
    {
        printf(" it is divisible by both ");
    }
    else if( n % 5 == 0)
    {
        printf(" it is divisible by 5");
    }
    else if ( n % 8 == 0)
    {
        printf(" it is divisible ny 8");
    }
    else
    {
        printf(" it is not divisible by any of two");
    }
    return 0;
}