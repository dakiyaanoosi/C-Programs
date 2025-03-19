#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    printf("Enter Third number : ");
    scanf("%d",&c);

    int l,s;
    //Finding Largest
    if(a>b)
    {
        if(a>c)
        {
            l=a;
        }
    }
    else if(b>c)
    l=b;
    else
    l=c;

    //Finding Smallest
    if(a<b)
    {
        if(a<c)
        {
            s=a;
        }
    }
    else if(b<c)
    s=b;
    else
    s=c;

    printf("Largest : %d\nSmallest : %d\n",l,s);


    return 0;
}