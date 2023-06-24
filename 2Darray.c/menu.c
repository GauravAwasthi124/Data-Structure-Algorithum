#include<stdio.h>
#include<stdlib.h>
void Multiplication();
void Transpose();
void Digonal();
int main()
{
    while (1)
    {
    int select;
    printf("Press 1 for Matrix Multiplication\nPress 2 for Matrix Transpose of Matrix\n");
    printf("Press 3 for Matrix Digonal swap\nPress 4 for Exit\n");
    scanf("%d",&select);
    switch (select)
    {
    case 1:
        Multiplication();
        break;
    case 2:
        Transpose();
        break;
    case 3:
        Digonal();
        break;
    case 4:
        exit(1);
    default:
        printf("Wrong choice");
        break;
    }   
    } 
    return 0;
}
void Multiplication()
{
    int row1,row2,col1,col2,i,j,k;
    printf("Enter the row of first matrix\n");
    scanf("%d",&row1);
    printf("Enter the com of first matrix\n");
    scanf("%d",&col1);
    printf("Enter the row of second matrix\n");
    scanf("%d",&row2);    
    printf("Enter the com of second matrix\n");
    scanf("%d",&col2);
    int array1[row1][col1],array2[row2][col2],array3[row1][col2];
    printf("For first matrix\n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col1; j++)
        {
            scanf("%d",&array1[i][j]);
        }
        
    }
    printf("For second matrix\n");
     for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }

    
    printf("For first matrix\n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col1; j++)
        {
            printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
    printf("For second matrix\n");
     for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }
    printf("Matirx multiplication\n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            array3[i][j]  = 0;
            for ( k = 0; k <col1; k++)
            {
                array3[i][j] += array1[i][j]*array2[i][j]; 
            }
        }
    }
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            printf("%d\t",array3[i][j]);
        }
        printf("\n");
    }
}
void Transpose()
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
}
void Digonal()
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
}