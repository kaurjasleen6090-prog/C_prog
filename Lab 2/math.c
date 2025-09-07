#include<stdio.h>
#include<math.h>
int main()
{
    float a = 5;
    float x,y,z,w,p;
    x = sin(a);
    y = cos(a);
    z = pow(a,2);
    w = sqrt(a);
    p = log(a);
    printf("%f\n%f\n%f\n%f\n%f\n",x,y,z,w,p);
    return 0;
}