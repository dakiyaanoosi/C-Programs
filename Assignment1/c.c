#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Side1 : ");
    scanf("%d",&a);
    printf("Side2 : ");
    scanf("%d",&b);
    printf("Side3 : ");
    scanf("%d",&c);

    double s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area : %.2lf",area);
    
    return 0;
}