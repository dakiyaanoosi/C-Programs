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

    printf("Change the element at index : ");
    int ind;
    scanf("%d",&ind);
    while(ind<0 || ind>=s)
    {
        printf("Invalid index......Enter again : ");
        scanf("%d",&ind);
    }

    printf("Enter the index value : ");
    int e;
    scanf("%d",&e);
    a[ind]=e;

    printf("Changed Array : [");
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