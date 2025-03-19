#include<stdio.h>
int main()
{
    int l;
    printf("Enter Limit : ");
    scanf("%d",&l);

    for(int i=2;i<=l;i++)
    {
        int c=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        printf("%d  ",i);
    }

    return 0;
}