#include<stdio.h>
#include<string.h>
int main()
{
    char text[256];
    printf("Enter a string : ");
    scanf("%s",text);
    int l=strlen(text);
    for(int i=0,j=l-1;i<j;i++,j--)
    {
        if(text[i]!=text[j])
        {
            printf("NOT A PALINDROME!\n");
            return 0;
        }
    }
    printf("PALINDROME!\n");
    return 0;
}