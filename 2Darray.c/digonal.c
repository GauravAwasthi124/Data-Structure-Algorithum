#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter the rows and cols you want to print\n");
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    printf("Enter the elements of matrix\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Output\n");
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
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][row-i-1];
        matrix[i][row-i-1] = temp;
    }
    printf("After transpose of matrix\n");
    for ( i = 0; i < row; ++i)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}