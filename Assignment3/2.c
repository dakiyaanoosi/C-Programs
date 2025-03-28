#include<stdio.h>
int main()
{
    int a,b,c,l,s;
    printf("Enter First number : ");
    scanf("%d",&a);
    l=s=a;
    printf("Enter Second number : ");
    scanf("%d",&b);
    if(b>l)
    l=b;
    else if(b<s)
    s=b;
    printf("Enter Third number : ");
    scanf("%d",&c);
    if(c>l)
    l=c;
    else if(c<s)
    s=c;

    printf("Largest : %d\nSmallest : %d\n",l,s);
    
    return 0;
}