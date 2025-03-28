#include<stdio.h>
int main()
{
    int col;
    printf("Number of columns : ");
    scanf("%d",&col);

    for(int i=1;i<=col;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%-3d",j);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=col;i++)
    {
        for(int j=1;j<=col-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    int c=1;
    for(int i=1;i<=col;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%-3d",c);
            c++;
        }
        printf("\n");
    }

    return 0;
}