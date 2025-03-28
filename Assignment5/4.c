#include<stdio.h>
int main()
{
    int l;
    printf("Enter Limit : ");
    scanf("%d",&l);

    for(int i=2;i<=l;i++)
    {
        int isPrime=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        printf("%d ",i);
    }

    return 0;
}