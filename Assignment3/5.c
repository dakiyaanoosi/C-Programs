#include<stdio.h>
int main()
{
    int p;
    printf("Enter your percentage : ");
    scanf("%d",&p);

    char grade;
    if(p>=90 && p<=100)
    grade='O';
    else if(p>=80 && p<=89)
    grade='E';
    else if(p>=70 && p<=79)
    grade='A';
    else if(p>=60 && p<=69)
    grade='B';
    else if(p>=50 && p<=59)
    grade='C';
    else if(p>=40 && p<=49)
    grade='D';
    else
    grade='F';

    printf("Grade : %c\n",grade);

    return 0;
}