#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer : ");
    scanf("%d",&num);

    int u=num%10;
    int t=(num/10)%10;
    printf("Unit's place : %d\nTen's place : %d\n",u,t);
    
    return 0;
}