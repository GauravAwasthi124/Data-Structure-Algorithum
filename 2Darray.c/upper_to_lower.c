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
       for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
           int temp = matrix[i][j];
           matrix[i][j]=matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    printf("\nAfter transpose of matrix\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}