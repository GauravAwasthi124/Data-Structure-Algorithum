#include<stdio.h>

int main()
{
    int row,col,i,j;
    printf("Enter the rows and cols for matrix\n");
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    printf("Enter the number for matrix\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The element of the matrix\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int matrix2[row][col];
       for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           matrix2[j][i]=matrix[i][j];
        }
    }
    printf("\nAfter transpose of matrix\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}