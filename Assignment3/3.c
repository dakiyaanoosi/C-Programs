#include<stdio.h>
int main()
{
    int y;
    printf("Enter year : ");
    scanf("%d",&y);
    if(y%4==0)
    printf("LEAP YEAR!!");
    else
    printf("NOT A LEAP YEAR!!");

    return 0;
}