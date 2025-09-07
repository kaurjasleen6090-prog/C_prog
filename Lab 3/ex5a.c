#include<stdio.h>
int main ()
{
    int number;
    printf(" enter a number :");
    scanf("%d",&number);
    if( number % 2 == 0)
    printf("number is even : %d\n",number);
    else
    printf("number is odd : %d\n", number);
    if( number > 0)
    printf("number is positive \n");
    else 
    printf("number is negative \n");
    return 0;
}