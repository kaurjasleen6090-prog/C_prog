#include<stdio.h>
int main()
{
    int num;
    printf("enter value of number : ");
    scanf("%d",&num);
    printf("left shift by <<1 (num<<1) : %d\n",num<<1);
    printf("left shift by <<2 (num<<2) : %d\n",num<<2);
    printf("right shift by >>1 (num>>1) : %d\n",num>>1);
    printf("right shift by >>2 (num>>2) : %d\n",num>>2);
    return 0;
}