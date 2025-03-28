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

    for(int i=1;i<s;i++)
    {
        int currElement=a[i];
        int index=i-1;
        while(index>=0 && a[index]>currElement)
        {
            a[index+1]=a[index];
            index--;
        }
        a[index+1]=currElement;
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