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
    while(t>0)
    {
        sum+=(n/d);
        n+=2;
        d+=2.2;
        t--;
    }
    printf("Sum of series : %.*f\n",p,sum);

    return 0;
}