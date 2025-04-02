#include<stdio.h>
int main()
{
    int t,p;
    printf("Number of terms : ");
    scanf("%d",&t);
    printf("Number of decimal places : ");
    scanf("%d",&p);

    double sum=0,d=1.3;
    int n=2;
    for(int i=0;i<t;i++)
    {
       sum+=(n/d);
       n+=2;
       d+=2.2;
    }
    printf("Sum of series : %.*f\n",p,sum);

    return 0;
}