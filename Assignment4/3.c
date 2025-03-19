#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("NEITHER PRIME NO COMPOSITE");
        return 0;
    }

    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
        if(c>3)
        break;
    }
    if(c==2)
    printf("PRIME");
    else
    printf("COMPOSITE");

    return 0;
}