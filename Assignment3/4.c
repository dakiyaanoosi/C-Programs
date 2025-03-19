#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("FINDING ROOTS OF QUADRATIC EQUATION\n");
    printf("Enter the value of 'a' : ");
    scanf("%lf",&a);
    printf("Enter the value of 'b' : ");
    scanf("%lf",&b);
    printf("Enter the value of 'c' : ");
    scanf("%lf",&c);

    double D = b*b-(4*a*c);
    if(D<0)
    printf("The equation has no Real Roots!\n");
    else
    {
        double r1=((-1*b)+sqrt(D))/(2*a);
        double r2=((-1*b)-sqrt(D))/(2*a);

        printf("The roots are x=%.1lf and x=%.1lf\n",r1,r2);
    }

    return 0;
}