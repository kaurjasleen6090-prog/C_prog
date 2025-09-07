#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, discriminant, root1, root2;
    printf("enter value of a, b, c : ");
    scanf("%f %f %f",&a,&b,&c);
    discriminant = (b*b-(4*a*c));
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("roots are real and distinct : %f %f",root1,root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = (-b/(2*a));
        printf("roots are real and equal : %f %f",root1,root2);
    }
    else
    printf("nothing");

    return 0;
}