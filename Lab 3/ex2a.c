#include<stdio.h>
int  main()
{
    int a,b,c;
    printf("enter values of a,b,c : ");
    scanf(" %d %d %d",&a,&b,&c);
    if ( a >= b  && a >= c)
    {
        printf(" a is greatest amongst three : %d\n", a);
    }
    else if ( b >= c  && b >= a)
    {
        printf(" b is greatest amongst three : %d\n", b);
    }
    else
    {
        printf(" c is greatest amongst three : %d\n", c);
    }

    return 0;
}