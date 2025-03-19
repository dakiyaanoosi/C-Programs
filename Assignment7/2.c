#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k;
    printf("\nMATRIX 1.......\n\n");
    printf("Enter the number of rows : ");
    scanf("%d",&r1);
    printf("Enter the number of columns : ");
    scanf("%d",&c1);

    int mat1[r1][c1];
    printf("\nEnter the elements.......\n\n");
    for(i=0;i<r1;i++)
    {
        printf("Row %d -> \n",i+1);
        for(j=0;j<c1;j++)
        {
            printf("Column %d : ",j+1);
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIX 2.......\n\n");
    do
    {
        printf("Enter the number of rows : ");
        scanf("%d",&r2);
    } while (r2!=c1);
    
    printf("Enter the number of columns : ");
    scanf("%d",&c2);

    int mat2[r2][c2];
    printf("\nEnter the elements.......\n\n");
    for(i=0;i<r2;i++)
    {
        printf("Row %d -> \n",i+1);
        for(j=0;j<c2;j++)
        {
            printf("Column %d : ",j+1);
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }

    int mat[r1][c2];
    int sum=0;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
                sum+=mat1[i][k]*mat2[k][j];
            }
            mat[i][j]=sum;
        }
    }

    printf("\nMATRIX 1\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d   ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIX 2\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d   ",mat2[i][j]);
        }
        printf("\n");
    }


    printf("\nResult of Multiplication :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d   ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}