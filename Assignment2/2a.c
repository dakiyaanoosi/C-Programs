#include<stdio.h>
int main()
{
    int a=2,b=3;
    printf("Values before Swapping\na = %d\nb = %d\n",a,b);

    int temp=a;
    a=b;
    b=temp;

    printf("Values after Swapping\na = %d\nb = %d\n",a,b);

    return 0;
}