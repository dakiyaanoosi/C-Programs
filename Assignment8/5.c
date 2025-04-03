#include<stdio.h>
int isLeapYear(int y)
{
    return y%4==0;
}
int main()
{
    printf("Enter year : ");
    int y;
    scanf("%d",&y);
    printf("%d\n",isLeapYear(y));
    return 0;
}
