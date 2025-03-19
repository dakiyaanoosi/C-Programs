#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer : ");
    scanf("%d",&num);

    printf("Unit's place : %d\nTen's place : %d\n",num%10,(num/10)%10);
    
    return 0;
}