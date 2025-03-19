#include<stdio.h>
int main()
{
    int a=0,b=1;
    int t;
    printf("Number of terms : ");
    scanf("%d",&t);
    printf("Fibbonacci Series : 0  1  ");
    for(int i=0;i<(t-2);i++)
    {
        b+=a;
        a=b-a;
        printf("%d  ",b);
    }

    return 0;
}