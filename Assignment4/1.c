#include<stdio.h>
int main()
{
    int a,d,n;
    printf("First term : ");
    scanf("%d",&a);
    printf("Common difference : ");
    scanf("%d",&d);
    printf("Number of terms : ");
    scanf("%d",&n);

    int AP=a;
    printf("AP : ");
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
        printf("%d,  ",AP);
        else
        printf("%d",AP);
        AP+=d;
    }

    return 0;
}