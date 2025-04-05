#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,index=-1;
    char string[64], pattern[64];
    printf("Enter the string : ");
    scanf("%63s",string);
    printf("Enter the pattern : ");
    scanf("%63s",pattern);

    int sl=strlen(string);
    int pl=strlen(pattern);

    for(i=0;i<=sl-pl;i++)
    {
        for(j=0;j<pl;j++)
        {
            if(tolower(string[i+j])!=tolower(pattern[j]))
            break;
        }
        if(j==pl)
        {
            index=i;
            break;
        }
    }
    printf("%d\n",index);
    return 0;
}