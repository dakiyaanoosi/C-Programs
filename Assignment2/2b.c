#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);

    a+=b;
    b=a-b;
    a-=b;

    printf("Swapping.........\na : %d\nb : %d\n",a,b);

    return 0;
}