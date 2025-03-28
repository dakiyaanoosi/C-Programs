#include<stdio.h>
int main()
{
    printf("Size of array : ");
    int s;
    scanf("%d",&s);
    int a[s];
    printf("Enter the %d numbers : ",s);
    for(int i=0;i<s;i++)
    scanf("%d",&a[i]);

    printf("Here's your array : [");
    for(int i=0;i<s;i++)
    {
        if(i<s-1)
        printf("%d, ",a[i]);
        else
        printf("%d",a[i]);
    }
    printf("]");
    return 0;
}