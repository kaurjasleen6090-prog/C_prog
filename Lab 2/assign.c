#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a and b : ");
    scanf("%d %d",&a,&b);
    int add = a;
    int sub = a;
    int mul = a;
    int div = a;
    int mod = a;
    add += b;
    printf("addition is : %d\n",add);
    sub -= b;
    printf("subtraction is : %d\n",sub);
    mul *= b;
    printf("multiplication is : %d\n",mul);
    div /= b;
    printf("division is : %d\n",div);
    mod %= b;
    printf("modulus is : %d\n",mod);
    return 0;
}