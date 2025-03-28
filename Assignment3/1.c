#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);

    if(a>b)
    printf("%d is greater then %d!\n",a,b);
    else if(b>a)
    printf("%d is greater then %d!\n",b,a);
    else 
    printf("Both numbers are Equal in magnitude");

    return 0;
}