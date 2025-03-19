#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a number : ");
    scanf("%d",&a);
    int temp=a;
    a+=10;
    printf("%d+10 = %d\n",temp,a);

    printf("Enter a number : ");
    scanf("%d",&a);
    temp=a;
    a-=3;
    printf("%d-3 = %d\n",temp,a);

    printf("Enter a number : ");
    scanf("%d",&a);
    temp=a;
    a*=10;
    printf("%dx10 = %d\n",temp,a);

    double b;
    printf("Enter a number : ");
    scanf("%lf",&b);
    double temp2=b;
    b/=2;
    printf("%.1lf/2 = %.1lf\n",temp2,b);

    return 0;
}