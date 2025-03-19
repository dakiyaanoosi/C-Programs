#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of Rows : ");
    scanf("%d",&r);
    printf("Enter the number of Columns : ");
    scanf("%d",&c);

    int mat1[r][c];
    int mat2[r][c];

    printf("\nEnter the elements of Matrix 1....\n");
    for(int i=0;i<r;i++)
    {
        printf("\nRow %d ->\n\n",i+1);
        for(int j=0;j<c;j++)
        {
            printf("Element %d : ",j+1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter the elements of Matrix 2....\n");
    for(int i=0;i<r;i++)
    {
        printf("\nRow %d ->\n\n",i+1);
        for(int j=0;j<c;j++)
        {
            printf("Element %d : ",j+1);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nMatrix 1\tMatrix 2\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d   ",mat1[i][j]);
        }
        printf("\t");
        for(int j=0;j<c;j++)
        {
            printf("%d   ",mat2[i][j]);
        }
        printf("\n");
    }

    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mat[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    printf("\nResult of Addition......\n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d   ",mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}