#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);

    int result1=a>0 && b>0;
    int result2=a>0 || b>0;
    int result3= !(a>0);

    printf("OUTPUT....\n%d\n%d\n%d\n",result1,result2,result3);

    return 0;
}