#include<stdio.h>
#include<math.h>
double power(int b,int e)
{
    if(b==0)
    {
        if(e<=0)
        {
            printf("Undefined!!\n");
            return NAN;
        }
        return 0.0;
    }
    
    if(b==1 || e==0) return 1.0;

    if(e<0) return 1.0/power(b,-e);

    double halfpower=power(b,e/2);

    if(e%2==0) return halfpower*halfpower;
    else return b*halfpower*halfpower;
}

int main()
{
    int b,e;
    printf("Base : ");
    scanf("%d",&b);
    printf("Exponent : ");
    scanf("%d",&e);

    double result=power(b,e);

    if(!isnan(result))
    printf("%.2f\n",result);
    
    return 0;
}