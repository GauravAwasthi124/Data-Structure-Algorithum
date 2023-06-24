#include<stdio.h>

int main()
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
    
    
    return 0;
}