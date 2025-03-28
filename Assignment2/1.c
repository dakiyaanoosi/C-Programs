#include<stdio.h>
int main()
{
    double r;
    printf("Enter radius : ");
    scanf("%lf",&r);

    double area= (double)22/7*r*r;
    printf("Area : %.2lf",area);

    return 0;
}