#include<stdio.h>
int main()
{
    int l;
    printf("Enter the number of lines : ");
    scanf("%d",&l);

    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=l-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            printf("*");
        }
        for(int j=1;j<=l-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    int c=1;
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }

    return 0;
}