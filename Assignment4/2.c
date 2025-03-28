#include<stdio.h>
int main()
{
    int a=0,b=1,t,next;
    printf("Number of terms : ");
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        if(i<2)
        next=i;
        else
        {
            next=a+b;
            a=b;
            b=next;
        }
        printf("%d  ",next);
    }

    return 0;
}