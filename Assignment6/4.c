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

    for(int i=0;i<s-1;i++)
    {
        int index=i;
        for(int j=i+1;j<s;j++)
        {
            if(a[index]>a[j])
            index=j;
        }
        if(index!=i)
        {
            int temp=a[i];
            a[i]=a[index];
            a[index]=temp;
        }
    }

    printf("Sorted Array : [");
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