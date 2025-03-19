#include<stdio.h>
int main()
{
    int sumOfDiv,sumOfDiv2;
    for(int i=1;i<=10000;i++)
    {
        sumOfDiv=0,sumOfDiv2=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            sumOfDiv+=j;
        }
        
        if(sumOfDiv<=10000 && sumOfDiv>i)
        {
            for(int k=1;k<sumOfDiv;k++)
            {
                if(sumOfDiv%k==0)
                sumOfDiv2+=k;
            }
            if(sumOfDiv2==i)
            printf("(%d, %d)\n",i,sumOfDiv);
        }
    }

    return 0;
}