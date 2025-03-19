#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter the Temperature in \370C : ");
    scanf("%lf",&c);

    f=(c*(double)9/5)+32;
    printf("Temperature in \370F : %.1lf\n",f);

    double c2,f2;
    printf("Entr the Temperature in \370F : ");
    scanf("%lf",&f2);

    c2=(f2-32)*(double)5/9;
    printf("Temperature in \370C : %.1lf",c2);

    return 0;
}