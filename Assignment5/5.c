#include<stdio.h>
#include<math.h>
int main()
{
    for(int i=100;i<1000;i++)
    {
        int temp=i;
        int arm=0;
        while(temp>0)
        {
            int r=temp%10;
            arm+=pow(r,3);
            temp/=10;
        }
        if(arm==i)
        printf("%d  ",arm);
    }

    return 0;
}