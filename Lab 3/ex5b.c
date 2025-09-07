#include<stdio.h>
int main()
{
    int num;
    printf(" enter number : ");
    scanf("%d",&num);
    (num % 2 == 0) ? printf(" %d is an even number \n",num) : printf(" %d is an odd number\n ", num);
    (num > 0) ? printf(" %d is a positive number \n", num)  : printf( " %d is a negative number \n", num);
    return 0;
}