#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        printf("a+b= %d",a+b);
        break;
        case 2 :
        printf("a-b= %d",a-b);
        break;
        case 3 :
        printf("a/b = %d",a/b);
        break;
        case 4 :
        printf("a*b = %d",a*b);
        break;
        default :
        printf(" wrong output");
    }
    return 0;
}