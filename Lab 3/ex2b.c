#include<stdio.h>
int main()
{
    int a,b,c,greatest,max;
    printf(" enter values of a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
    greatest = a > b ? a : b;
    max = greatest > c ? greatest : c ;
    printf( "greater amongst three is : %d\n ", max, c ); 
    return 0;

}