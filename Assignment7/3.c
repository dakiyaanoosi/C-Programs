#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char text[64];
    printf("Enter a string : ");
    scanf("%63s",text);
    int l=strlen(text);
    for(int i=0,j=l-1;i<j;i++,j--)
    {
        if(tolower(text[i])!=tolower(text[j]))
        {
            printf("NOT A PALINDROME!\n");
            return 0;
        }
    }
    printf("PALINDROME!\n");
    return 0;
}
