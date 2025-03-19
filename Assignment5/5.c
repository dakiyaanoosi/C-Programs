#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int temp=n,l=0;
    while(temp!=0)
    {
        temp/=10;
        l++;
    }

    temp=n;
    double arm=0;
    while(temp!=0)
    {
        int digit=temp%10;
        temp/=10;
        arm+=pow(digit,l);
    }
    if(arm==n)
    printf("ARMSTRONG NUMBER");
    else
    printf("NOT AN ARMSTRONG NUMBER");

    return 0;
}