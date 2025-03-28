#include<stdio.h>
#include<math.h>
void roots(float a, float b, float c)
{
    float D=b*b-(4*a*c);
    if(D<0)
    {
        printf("No Real Roots !!\n");
        return;
    }
    float r1=(-b+sqrt(D))/(2*a);
    float r2=(-b-sqrt(D))/(2*a);
    printf("x = {%.2f, %.2f}\n",r1,r2);
}
int main()
{
    float a,b,c;
    printf("Enter 'a' : ");
    scanf("%f",&a);
    printf("Enter 'b' : ");
    scanf("%f",&b);
    printf("Enter 'c' : ");
    scanf("%f",&c);
    roots(a,b,c);
    return 0;
}