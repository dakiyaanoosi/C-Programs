#include<stdio.h>
int main()
{
    int lim;
    printf("Enter Limit : ");
    scanf("%d",&lim);

    int a=0,b=1,index=2;
    while(index<=lim)
    {
        b+=a;
        a=b-a;
        for(int i=index;i<b;i++)
        {
            if(i>lim)
            break;
            printf("%d  ",i);
        }
        index=b+1;
    }

    return 0;
}