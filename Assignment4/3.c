#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("COMPOSITE\n");
        return 0;
    }
    if(n==2)
    {
        printf("PRIME\n");
        return 0;
    }
    
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==1)
    printf("COMPOSITE");
    else
    printf("PRIME");

    return 0;
}