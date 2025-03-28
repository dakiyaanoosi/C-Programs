#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter the Temperature in \370C : ");
    scanf("%lf",&c);

    f=(c*(double)9/5)+32;
    printf("Temperature in \370F : %.1lf\n",f);

    printf("Entr the Temperature in \370F : ");
    scanf("%lf",&f);

    c=(f-32)*(double)5/9;
    printf("Temperature in \370C : %.1lf",c);

    return 0;
}