#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int temp=n;
    int reverse=0;
    while(temp!=0)
    {
        int r=temp%10;
        reverse=(reverse*10)+r;
        temp/=10;
    }
    if(reverse==n)
    printf("PALINDROME");
    else
    printf("NOT A PALINDROME");

    return 0;
}