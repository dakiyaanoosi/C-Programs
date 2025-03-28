#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Enter the value of 'a' : ");
    scanf("%lf",&a);
    if(a==0)
    {
        printf("'a' cannot be zero for Quadratic Equation !!");
        return 0;
    }
    printf("Enter the value of 'b' : ");
    scanf("%lf",&b);
    printf("Enter the value of 'c' : ");
    scanf("%lf",&c);

    double D = b*b-(4*a*c);
    if(D<0)
    {
        printf("The equation has no Real Roots!\n");
        return 0;
    }
    double r1=((-b)+sqrt(D))/(2*a);
    double r2=((-b)-sqrt(D))/(2*a);

    printf("x = {%.2f, %.2f}\n",r1,r2);

    return 0;
}