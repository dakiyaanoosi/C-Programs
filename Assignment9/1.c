#include<stdio.h>
unsigned long long int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of %d : %llu",n,fact(n));
    return 0;
}