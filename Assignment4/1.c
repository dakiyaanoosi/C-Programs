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

    printf("AP : ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a);
        a+=d;
    }

    return 0;
}